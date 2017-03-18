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
#include "CarbonTestMessages.h"

namespace facebook {
namespace memcache {
namespace test {

void ManyFields::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, buf1());
  writer.writeField(2 /* field id */, buf2());
  writer.writeField(3 /* field id */, buf3());
  writer.writeField(4 /* field id */, buf4());
  writer.writeField(5 /* field id */, buf5());
  writer.writeField(6 /* field id */, buf6());
  writer.writeField(7 /* field id */, buf7());
  writer.writeField(8 /* field id */, buf8());
  writer.writeField(9 /* field id */, buf9());
  writer.writeField(10 /* field id */, buf10());
  writer.writeField(11 /* field id */, buf11());
  writer.writeField(12 /* field id */, buf12());
  writer.writeField(13 /* field id */, buf13());
  writer.writeField(14 /* field id */, buf14());
  writer.writeField(15 /* field id */, buf15());
  writer.writeField(16 /* field id */, buf16());
  writer.writeField(17 /* field id */, buf17());
  writer.writeField(18 /* field id */, buf18());
  writer.writeField(19 /* field id */, buf19());
  writer.writeField(20 /* field id */, buf20());
  writer.writeField(21 /* field id */, buf21());
  writer.writeField(22 /* field id */, buf22());
  writer.writeField(23 /* field id */, buf23());
  writer.writeField(24 /* field id */, buf24());
  writer.writeField(25 /* field id */, buf25());
  writer.writeField(26 /* field id */, buf26());
  writer.writeField(27 /* field id */, buf27());
  writer.writeField(28 /* field id */, buf28());
  writer.writeField(29 /* field id */, buf29());
  writer.writeField(30 /* field id */, buf30());
  writer.writeField(31 /* field id */, buf31());
  writer.writeField(32 /* field id */, buf32());
  writer.writeField(33 /* field id */, buf33());
  writer.writeField(34 /* field id */, buf34());
  writer.writeField(35 /* field id */, buf35());
  writer.writeField(36 /* field id */, buf36());
  writer.writeField(37 /* field id */, buf37());
  writer.writeField(38 /* field id */, buf38());
  writer.writeField(39 /* field id */, buf39());
  writer.writeField(40 /* field id */, buf40());
  writer.writeStructEnd();
  writer.writeStop();
}

void ManyFields::deserialize(carbon::CarbonProtocolReader& reader) {
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
        reader.readRawInto(buf1());
        break;
      }
      case 2: {
        reader.readRawInto(buf2());
        break;
      }
      case 3: {
        reader.readRawInto(buf3());
        break;
      }
      case 4: {
        reader.readRawInto(buf4());
        break;
      }
      case 5: {
        reader.readRawInto(buf5());
        break;
      }
      case 6: {
        reader.readRawInto(buf6());
        break;
      }
      case 7: {
        reader.readRawInto(buf7());
        break;
      }
      case 8: {
        reader.readRawInto(buf8());
        break;
      }
      case 9: {
        reader.readRawInto(buf9());
        break;
      }
      case 10: {
        reader.readRawInto(buf10());
        break;
      }
      case 11: {
        reader.readRawInto(buf11());
        break;
      }
      case 12: {
        reader.readRawInto(buf12());
        break;
      }
      case 13: {
        reader.readRawInto(buf13());
        break;
      }
      case 14: {
        reader.readRawInto(buf14());
        break;
      }
      case 15: {
        reader.readRawInto(buf15());
        break;
      }
      case 16: {
        reader.readRawInto(buf16());
        break;
      }
      case 17: {
        reader.readRawInto(buf17());
        break;
      }
      case 18: {
        reader.readRawInto(buf18());
        break;
      }
      case 19: {
        reader.readRawInto(buf19());
        break;
      }
      case 20: {
        reader.readRawInto(buf20());
        break;
      }
      case 21: {
        reader.readRawInto(buf21());
        break;
      }
      case 22: {
        reader.readRawInto(buf22());
        break;
      }
      case 23: {
        reader.readRawInto(buf23());
        break;
      }
      case 24: {
        reader.readRawInto(buf24());
        break;
      }
      case 25: {
        reader.readRawInto(buf25());
        break;
      }
      case 26: {
        reader.readRawInto(buf26());
        break;
      }
      case 27: {
        reader.readRawInto(buf27());
        break;
      }
      case 28: {
        reader.readRawInto(buf28());
        break;
      }
      case 29: {
        reader.readRawInto(buf29());
        break;
      }
      case 30: {
        reader.readRawInto(buf30());
        break;
      }
      case 31: {
        reader.readRawInto(buf31());
        break;
      }
      case 32: {
        reader.readRawInto(buf32());
        break;
      }
      case 33: {
        reader.readRawInto(buf33());
        break;
      }
      case 34: {
        reader.readRawInto(buf34());
        break;
      }
      case 35: {
        reader.readRawInto(buf35());
        break;
      }
      case 36: {
        reader.readRawInto(buf36());
        break;
      }
      case 37: {
        reader.readRawInto(buf37());
        break;
      }
      case 38: {
        reader.readRawInto(buf38());
        break;
      }
      case 39: {
        reader.readRawInto(buf39());
        break;
      }
      case 40: {
        reader.readRawInto(buf40());
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
} // memcache
} // facebook
