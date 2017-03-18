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

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CarbonProtocolWriter.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>

namespace facebook {
namespace memcache {

class McVersionReply;

class McVersionRequest : public carbon::RequestCommon {
 public:
  using reply_type = McVersionReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 25;
  static constexpr const char* name = "version";

  McVersionRequest() = default;
  McVersionRequest(const McVersionRequest&) = default;
  McVersionRequest& operator=(const McVersionRequest&) = default;
  McVersionRequest(McVersionRequest&&) = default;
  McVersionRequest& operator=(McVersionRequest&&) = default;
  explicit McVersionRequest(folly::StringPiece sp) : key_(sp) {}
  explicit McVersionRequest(folly::IOBuf&& carbonKey)
      : key_(std::move(carbonKey)) {}

  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<folly::IOBuf> key_;
};

class McVersionReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = true;
  static constexpr size_t typeId = 26;

  McVersionReply() = default;
  McVersionReply(const McVersionReply&) = default;
  McVersionReply& operator=(const McVersionReply&) = default;
  McVersionReply(McVersionReply&&) = default;
  McVersionReply& operator=(McVersionReply&&) = default;
  explicit McVersionReply(carbon::Result carbonResult)
      : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  const folly::IOBuf& value() const {
    return value_;
  }
  folly::IOBuf& value() {
    return value_;
  }
  const std::string& message() const {
    return message_;
  }
  std::string& message() {
    return message_;
  }
  int16_t appSpecificErrorCode() const {
    return appSpecificErrorCode_;
  }
  int16_t& appSpecificErrorCode() {
    return appSpecificErrorCode_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
  folly::IOBuf value_;
  std::string message_;
  int16_t appSpecificErrorCode_{0};
};

class McStatsReply;

class McStatsRequest : public carbon::RequestCommon {
 public:
  using reply_type = McStatsReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 33;
  static constexpr const char* name = "stats";

  McStatsRequest() = default;
  McStatsRequest(const McStatsRequest&) = default;
  McStatsRequest& operator=(const McStatsRequest&) = default;
  McStatsRequest(McStatsRequest&&) = default;
  McStatsRequest& operator=(McStatsRequest&&) = default;
  explicit McStatsRequest(folly::StringPiece sp) : key_(sp) {}
  explicit McStatsRequest(folly::IOBuf&& carbonKey)
      : key_(std::move(carbonKey)) {}

  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<folly::IOBuf> key_;
};

class McStatsReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 34;

  McStatsReply() = default;
  McStatsReply(const McStatsReply&) = default;
  McStatsReply& operator=(const McStatsReply&) = default;
  McStatsReply(McStatsReply&&) = default;
  McStatsReply& operator=(McStatsReply&&) = default;
  explicit McStatsReply(carbon::Result carbonResult) : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  const std::string& message() const {
    return message_;
  }
  std::string& message() {
    return message_;
  }
  const std::vector<std::string>& stats() const {
    return stats_;
  }
  std::vector<std::string>& stats() {
    return stats_;
  }
  int16_t appSpecificErrorCode() const {
    return appSpecificErrorCode_;
  }
  int16_t& appSpecificErrorCode() {
    return appSpecificErrorCode_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
  std::string message_;
  std::vector<std::string> stats_;
  int16_t appSpecificErrorCode_{0};
};

class McShutdownReply;

class McShutdownRequest : public carbon::RequestCommon {
 public:
  using reply_type = McShutdownReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 35;
  static constexpr const char* name = "shutdown";

  McShutdownRequest() = default;
  McShutdownRequest(const McShutdownRequest&) = default;
  McShutdownRequest& operator=(const McShutdownRequest&) = default;
  McShutdownRequest(McShutdownRequest&&) = default;
  McShutdownRequest& operator=(McShutdownRequest&&) = default;
  explicit McShutdownRequest(folly::StringPiece sp) : key_(sp) {}
  explicit McShutdownRequest(folly::IOBuf&& carbonKey)
      : key_(std::move(carbonKey)) {}

  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<folly::IOBuf> key_;
};

class McShutdownReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 36;

  McShutdownReply() = default;
  McShutdownReply(const McShutdownReply&) = default;
  McShutdownReply& operator=(const McShutdownReply&) = default;
  McShutdownReply(McShutdownReply&&) = default;
  McShutdownReply& operator=(McShutdownReply&&) = default;
  explicit McShutdownReply(carbon::Result carbonResult)
      : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  const std::string& message() const {
    return message_;
  }
  std::string& message() {
    return message_;
  }
  int16_t appSpecificErrorCode() const {
    return appSpecificErrorCode_;
  }
  int16_t& appSpecificErrorCode() {
    return appSpecificErrorCode_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
  std::string message_;
  int16_t appSpecificErrorCode_{0};
};

class McQuitReply;

class McQuitRequest : public carbon::RequestCommon {
 public:
  using reply_type = McQuitReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 37;
  static constexpr const char* name = "quit";

  McQuitRequest() = default;
  McQuitRequest(const McQuitRequest&) = default;
  McQuitRequest& operator=(const McQuitRequest&) = default;
  McQuitRequest(McQuitRequest&&) = default;
  McQuitRequest& operator=(McQuitRequest&&) = default;
  explicit McQuitRequest(folly::StringPiece sp) : key_(sp) {}
  explicit McQuitRequest(folly::IOBuf&& carbonKey)
      : key_(std::move(carbonKey)) {}

  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<folly::IOBuf> key_;
};

class McQuitReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 38;

  McQuitReply() = default;
  McQuitReply(const McQuitReply&) = default;
  McQuitReply& operator=(const McQuitReply&) = default;
  McQuitReply(McQuitReply&&) = default;
  McQuitReply& operator=(McQuitReply&&) = default;
  explicit McQuitReply(carbon::Result carbonResult) : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  const std::string& message() const {
    return message_;
  }
  std::string& message() {
    return message_;
  }
  int16_t appSpecificErrorCode() const {
    return appSpecificErrorCode_;
  }
  int16_t& appSpecificErrorCode() {
    return appSpecificErrorCode_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
  std::string message_;
  int16_t appSpecificErrorCode_{0};
};

class McExecReply;

class McExecRequest : public carbon::RequestCommon {
 public:
  using reply_type = McExecReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 39;
  static constexpr const char* name = "exec";

  McExecRequest() = default;
  McExecRequest(const McExecRequest&) = default;
  McExecRequest& operator=(const McExecRequest&) = default;
  McExecRequest(McExecRequest&&) = default;
  McExecRequest& operator=(McExecRequest&&) = default;
  explicit McExecRequest(folly::StringPiece sp) : key_(sp) {}
  explicit McExecRequest(folly::IOBuf&& carbonKey)
      : key_(std::move(carbonKey)) {}

  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<folly::IOBuf> key_;
};

class McExecReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 40;

  McExecReply() = default;
  McExecReply(const McExecReply&) = default;
  McExecReply& operator=(const McExecReply&) = default;
  McExecReply(McExecReply&&) = default;
  McExecReply& operator=(McExecReply&&) = default;
  explicit McExecReply(carbon::Result carbonResult) : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  const std::string& response() const {
    return response_;
  }
  std::string& response() {
    return response_;
  }
  const std::string& message() const {
    return message_;
  }
  std::string& message() {
    return message_;
  }
  int16_t appSpecificErrorCode() const {
    return appSpecificErrorCode_;
  }
  int16_t& appSpecificErrorCode() {
    return appSpecificErrorCode_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
  std::string response_;
  std::string message_;
  int16_t appSpecificErrorCode_{0};
};

} // memcache
} // facebook

#include "CommonMessages-inl.h"
