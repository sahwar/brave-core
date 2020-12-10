/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_AD_SERVING_AD_TARGETING_MODELS_PURCHASE_INTENT_PURCHASE_INTENT_MODEL_H_  // NOLINT
#define BAT_ADS_INTERNAL_AD_SERVING_AD_TARGETING_MODELS_PURCHASE_INTENT_PURCHASE_INTENT_MODEL_H_  // NOLINT

#include <stdint.h>

#include "bat/ads/internal/ad_serving/ad_targeting/models/model.h"
#include "bat/ads/internal/ad_serving/ad_targeting/models/purchase_intent/purchase_intent_signal_history_info.h"
#include "bat/ads/internal/ad_targeting/resources/purchase_intent/purchase_intent_resource.h"

namespace ads {
namespace ad_targeting {
namespace model {

class PurchaseIntent : public Model {
 public:
  PurchaseIntent();

  ~PurchaseIntent() override;

  SegmentList GetSegments() const override;

 private:
  uint16_t GetIntentScoreForHistory(
      const PurchaseIntentSignalSegmentHistoryList& history) const;
};

}  // namespace model
}  // namespace ad_targeting
}  // namespace ads

#endif  // BAT_ADS_INTERNAL_AD_SERVING_AD_TARGETING_MODELS_PURCHASE_INTENT_PURCHASE_INTENT_MODEL_H_  // NOLINT
