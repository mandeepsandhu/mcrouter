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
#include "BMessages.h"

namespace carbon {
namespace test {

void BaseStruct::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, baseInt64Member());
  writer.writeStructEnd();
  writer.writeStop();
}

void BaseStruct::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(baseInt64Member());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void SimpleStruct::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(-1 /* field id */, asBaseStruct());
  writer.writeField(1 /* field id */, int32Member());
  writer.writeField(2 /* field id */, stringMember());
  writer.writeField(3 /* field id */, enumMember());
  writer.writeField(4 /* field id */, vectorMember());
  writer.writeStructEnd();
  writer.writeStop();
}

void SimpleStruct::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case -1: {
        reader.readRawInto(_carbon_basestruct_);
        break;
      }
      case 1: {
        reader.readRawInto(int32Member());
        break;
      }
      case 2: {
        reader.readRawInto(stringMember());
        break;
      }
      case 3: {
        reader.readRawInto(enumMember());
        break;
      }
      case 4: {
        reader.readRawInto(vectorMember());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

} // test
} // carbon
