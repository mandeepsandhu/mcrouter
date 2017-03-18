/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <string>
#include <utility>

#include <mcrouter/lib/RouteHandleTraverser.h>

#include "mcrouter/lib/carbon/example/gen/HelloGoodbyeMessages.h"

namespace hellogoodbye {

template <class Route>
class HelloGoodbyeRouteHandle;

class HelloGoodbyeRouteHandleIf {
 public:
  template <class Route>
  using Impl = HelloGoodbyeRouteHandle<Route>;

  /**
   * Returns a string identifying this route handle instance
   */
  virtual std::string routeName() const = 0;

  virtual ~HelloGoodbyeRouteHandleIf() = default;

  virtual GoodbyeReply route(const GoodbyeRequest&) = 0;
  virtual HelloReply route(const HelloRequest&) = 0;

  virtual void traverse(
      const GoodbyeRequest&,
      const facebook::memcache::RouteHandleTraverser<
          HelloGoodbyeRouteHandleIf>&) const = 0;
  virtual void traverse(
      const HelloRequest&,
      const facebook::memcache::RouteHandleTraverser<
          HelloGoodbyeRouteHandleIf>&) const = 0;
};

template <class Route>
class HelloGoodbyeRouteHandle : public HelloGoodbyeRouteHandleIf {
 public:
  template <class... Args>
  explicit HelloGoodbyeRouteHandle(Args&&... args)
      : route_(std::forward<Args>(args)...) {}
  std::string routeName() const override final {
    return route_.routeName();
  }

  GoodbyeReply route(const GoodbyeRequest& request) override final {
    return route_.route(request);
  }
  HelloReply route(const HelloRequest& request) override final {
    return route_.route(request);
  }

  void traverse(
      const GoodbyeRequest& request,
      const facebook::memcache::RouteHandleTraverser<HelloGoodbyeRouteHandleIf>&
          traverser) const override final {
    route_.traverse(request, traverser);
  }
  void traverse(
      const HelloRequest& request,
      const facebook::memcache::RouteHandleTraverser<HelloGoodbyeRouteHandleIf>&
          traverser) const override final {
    route_.traverse(request, traverser);
  }

 private:
  Route route_;
};

} // hellogoodbye
