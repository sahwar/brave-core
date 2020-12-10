/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_AD_TARGETING_RESOURCES_PURCHASE_INTENT_SITE_INFO_H_
#define BAT_ADS_INTERNAL_AD_TARGETING_RESOURCES_PURCHASE_INTENT_SITE_INFO_H_

#include <stdint.h>

#include <string>

#include "bat/ads/internal/ad_targeting/resources/purchase_intent/segment_keyword_info.h"

namespace ads {
namespace ad_targeting {
namespace resource {

struct SiteInfo {
 public:
  SiteInfo();
  SiteInfo(
      const PurchaseIntentSegmentList& segments,
      const std::string& url_netloc,
      const uint16_t weight);
  SiteInfo(
      const SiteInfo& info);
  ~SiteInfo();

  bool operator==(
      const SiteInfo& rhs) const;
  bool operator!=(
      const SiteInfo& rhs) const;

  PurchaseIntentSegmentList segments;
  std::string url_netloc;
  uint16_t weight = 0;
};

}  // namespace resource
}  // namespace ad_targeting
}  // namespace ads

#endif  // BAT_ADS_INTERNAL_AD_TARGETING_RESOURCES_PURCHASE_INTENT_SITE_INFO_H_
