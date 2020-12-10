/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_AD_TARGETING_AD_TARGETING_H_
#define BAT_ADS_INTERNAL_AD_TARGETING_AD_TARGETING_H_

#include <string>
#include <vector>

#include "bat/ads/internal/ad_serving/ad_targeting/models/model.h"

namespace ads {

class AdTargeting {
 public:
  AdTargeting();

  ~AdTargeting();

  SegmentList GetSegments() const;

 private:
  SegmentList GetTextClassificationSegments() const;
  SegmentList GetPurchaseIntentSegments() const;
};

}  // namespace ads

#endif  // BAT_ADS_INTERNAL_AD_TARGETING_AD_TARGETING_H_
