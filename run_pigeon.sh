flutter pub run pigeon \
  --input pigeons/messages.dart \
  --dart_out lib/messages.dart \
  --objc_header_out ios/Classes/messages.h \
  --objc_source_out ios/Classes/messages.m \
  --objc_prefix FLT \
  --java_out android/src/main/java/com/example/pigeon_plugin/Messages.java \
  --java_package "com.example.pigeon_plugin" \
  --cpp_header_out windows/messages.h \
  --cpp_source_out windows/messages.cpp
