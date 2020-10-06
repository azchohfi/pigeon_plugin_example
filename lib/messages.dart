// Autogenerated from Pigeon (v0.1.9), do not edit directly.
// See also: https://pub.dev/packages/pigeon
// ignore_for_file: public_member_api_docs, non_constant_identifier_names, avoid_as, unused_import
// @dart = 2.8
import 'dart:async';
import 'package:flutter/services.dart';
import 'dart:typed_data' show Uint8List, Int32List, Int64List, Float64List;

class Version {
  String string;
  // ignore: unused_element
  Map<dynamic, dynamic> _toMap() {
    final Map<dynamic, dynamic> pigeonMap = <dynamic, dynamic>{};
    pigeonMap['string'] = string;
    return pigeonMap;
  }
  // ignore: unused_element
  static Version _fromMap(Map<dynamic, dynamic> pigeonMap) {
    if (pigeonMap == null){
      return null;
    }
    final Version result = Version();
    result.string = pigeonMap['string'];
    return result;
  }
}

class ExampleApi {
  Future<Version> getPlatformVersion() async {
    const BasicMessageChannel<dynamic> channel =
        BasicMessageChannel<dynamic>('dev.flutter.pigeon.ExampleApi.getPlatformVersion', StandardMessageCodec());
    
    final Map<dynamic, dynamic> replyMap = await channel.send(null);
    if (replyMap == null) {
      throw PlatformException(
        code: 'channel-error',
        message: 'Unable to establish connection on channel.',
        details: null);
    } else if (replyMap['error'] != null) {
      final Map<dynamic, dynamic> error = replyMap['error'];
      throw PlatformException(
          code: error['code'],
          message: error['message'],
          details: error['details']);
    } else {
      return Version._fromMap(replyMap['result']);
    }
    
  }
}
