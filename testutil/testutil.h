/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the LICENSE
 * file in the root directory of this source tree.
 */
#pragma once

#include <yoga/events.h>

#include <functional>

namespace facebook {
namespace yoga {
namespace test {

struct TestUtil {
  static void startCountingNodes();
  static int nodeCount();
  static int stopCountingNodes();
};

struct ScopedEventSubscription {
  ScopedEventSubscription(std::function<Event::Subscriber>&&);
  ~ScopedEventSubscription();
};

} // namespace test
} // namespace yoga
} // namespace facebook
