// Autogenerated from Pigeon (v1.1.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#pragma once
#include <flutter/encodable_value.h>
#include <flutter/basic_message_channel.h>
#include <flutter/binary_messenger.h>
#include <flutter/standard_message_codec.h>
#include <map>
#include <string>


/** Generated class from Pigeon. */

/** Generated class from Pigeon that represents data sent in messages. */
class Version {
public:
    std::string getString();
    void setString(std::string setterArg);

    flutter::EncodableMap ToEncodableMap(); 
    Version(); 
    Version(flutter::EncodableMap map);   
private:
    std::string string;
  
};
class ExampleApiCodecSerializer : public flutter::StandardCodecSerializer {
public:

    inline static ExampleApiCodecSerializer& Instance() {
      static ExampleApiCodecSerializer sInstance;
      return sInstance;
    }

    ExampleApiCodecSerializer();
  
  protected:
    flutter::EncodableValue ReadValueOfType(uint8_t type, flutter::ByteStreamReader* stream) const;
    void WriteValue(const flutter::EncodableValue& value, flutter::ByteStreamWriter* stream) const;
  
};

/** Generated class from Pigeon that represents a handler of messages from Flutter.*/
class ExampleApi {
public:
    virtual Version getPlatformVersion() = 0;

    /** The codec used by ExampleApi. */
    static const flutter::StandardMessageCodec& GetCodec();
    /** Sets up an instance of `ExampleApi` to handle messages through the `binaryMessenger`. */
    static void Setup(flutter::BinaryMessenger* binaryMessenger, ExampleApi* api);
    static flutter::EncodableMap WrapError(std::exception exception);
  
};
