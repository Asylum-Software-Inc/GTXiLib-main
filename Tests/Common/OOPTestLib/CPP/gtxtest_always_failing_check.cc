//
// Copyright 2021 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "gtxtest_always_failing_check.h"

#include <abseil/absl/types/optional.h>
#include "check.h"

namespace gtxtest {

std::string GTXTestAlwaysFailingCheck::name() const { return name_; }

gtx::CheckCategory GTXTestAlwaysFailingCheck::Category() const {
  return gtx::CheckCategory::kAccessibilityLabel;
}

absl::optional<CheckResultProto> GTXTestAlwaysFailingCheck::CheckElement(
    const UIElementProto &element, const gtx::Parameters &params) const {
  return CheckResult(RESULT_ID_FAILURE, element, gtx::MetadataMap());
}

std::string GTXTestAlwaysFailingCheck::GetRichTitle(
    gtx::Locale locale, int result_id, const gtx::MetadataMap &metadata,
    const gtx::LocalizedStringsManager &string_manager) const {
  return string_manager.LocalizedString(locale,
                                        gtx::kLocalizedStringIDEmptyString);
}

std::string GTXTestAlwaysFailingCheck::GetRichShortMessage(
    gtx::Locale locale, int result_id, const gtx::MetadataMap &metadata,
    const gtx::LocalizedStringsManager &string_manager) const {
  return string_manager.LocalizedString(locale,
                                        gtx::kLocalizedStringIDEmptyString);
}

std::string GTXTestAlwaysFailingCheck::GetDefaultMessage(
    gtx::Locale locale, int result_id, const gtx::MetadataMap &metadata,
    const gtx::LocalizedStringsManager &string_manager) const {
  return string_manager.LocalizedString(locale,
                                        gtx::kLocalizedStringIDEmptyString);
}

GTXTestAlwaysFailingCheck::GTXTestAlwaysFailingCheck(const std::string &name)
    : name_(name) {}

}  // namespace gtxtest
