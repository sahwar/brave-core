/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_BROWSER_UI_VIEWS_SIDEBAR_SIDEBAR_ITEMS_CONTAINER_VIEW_H_
#define BRAVE_BROWSER_UI_VIEWS_SIDEBAR_SIDEBAR_ITEMS_CONTAINER_VIEW_H_

#include "ui/views/view.h"

class BraveBrowser;
class Browser;

class SidebarItemsContainerView : public views::View {
 public:
  explicit SidebarItemsContainerView(Browser* browser);
  ~SidebarItemsContainerView() override;

  SidebarItemsContainerView(const SidebarItemsContainerView&) = delete;
  SidebarItemsContainerView operator=(
      const SidebarItemsContainerView&) = delete;

  // views::View overrides:
  gfx::Size CalculatePreferredSize() const override;

 private:
  // Fetch items data from model and initialize each item's view.
  // Newly added/deleted items during the runtime will be handled separately.
  void InitItems();

  BraveBrowser* browser_ = nullptr;
};

#endif  // BRAVE_BROWSER_UI_VIEWS_SIDEBAR_SIDEBAR_ITEMS_CONTAINER_VIEW_H_
