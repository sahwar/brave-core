/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_BROWSER_UI_SIDEBAR_SIDEBAR_H_
#define BRAVE_BROWSER_UI_SIDEBAR_SIDEBAR_H_

class Sidebar {
 public:
  virtual ShowSidebar() = 0;
  virtual HideSidebar() = 0;
};

#endif  // BRAVE_BROWSER_UI_SIDEBAR_SIDEBAR_H_
