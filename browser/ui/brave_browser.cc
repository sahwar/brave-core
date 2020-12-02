/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/browser/ui/brave_browser.h"

#if BUILDFLAG(ENABLE_SIDEBAR)
#include "base/feature_list.h"
#include "brave/browser/ui/sidebar/sidebar_controller.h"
#include "brave/browser/ui/sidebar/sidebar_model.h"
#include "brave/components/sidebar/features.h"
#include "brave/browser/ui/brave_browser_window.h"
#endif

BraveBrowser::BraveBrowser(const CreateParams& params)
    : Browser(params) {
#if BUILDFLAG(ENABLE_SIDEBAR)
  if (!base::FeatureList::IsEnabled(sidebar::kSidebarFeature) ||
       !is_type_normal()) {
    return;
  }
  sidebar_controller_.reset(new sidebar::SidebarController(profile()));
  // Sidebar UI should be setup after controller is initialized.
  // SidebarController is initialized after BrowserView is created
  // because BrowserView is created by the ctor of Browser.
  // So, we can ask sidebar UI init to BrowserView now.
  brave_window()->InitSidebar();
  // After UI initialization, setup model data.
  // Sidebar UI will be updated as model changes.
  sidebar_controller_->model()->Init();
#endif
}

BraveBrowser::~BraveBrowser() = default;

BraveBrowserWindow* BraveBrowser::brave_window() {
  return static_cast<BraveBrowserWindow*>(window_);
}
