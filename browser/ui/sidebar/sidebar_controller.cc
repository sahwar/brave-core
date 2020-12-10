/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/browser/ui/sidebar/sidebar_controller.h"

#include "brave/browser/ui/sidebar/sidebar_model.h"

namespace sidebar {

SidebarController::SidebarController(Profile* profile)
    : sidebar_model_(new SidebarModel(profile)) {
}

SidebarController::~SidebarController() = default;

}  // namespace sidebar
