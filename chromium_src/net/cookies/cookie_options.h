/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_CHROMIUM_SRC_NET_COOKIES_COOKIE_OPTIONS_H_
#define BRAVE_CHROMIUM_SRC_NET_COOKIES_COOKIE_OPTIONS_H_

#define BRAVE_COOKIE_OPTIONS_H \
 public:                       \
  GURL top_frame_url_for_ephemeral_storage_;

#include "../../../../../net/cookies/cookie_options.h"

#undef BRAVE_COOKIE_OPTIONS_H

#endif  // BRAVE_CHROMIUM_SRC_NET_COOKIES_COOKIE_OPTIONS_H_
