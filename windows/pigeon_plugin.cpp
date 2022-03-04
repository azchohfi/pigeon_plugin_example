#include "include/pigeon_plugin/pigeon_plugin.h"

// This must be included before many other Windows headers.
#include <windows.h>

// For getPlatformVersion; remove unless needed for your plugin implementation.
#include <VersionHelpers.h>

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>
#include <flutter/standard_method_codec.h>

#include <map>
#include <memory>
#include <sstream>

#include "messages.h"

namespace {

class PigeonPlugin : public flutter::Plugin, public ExampleApi {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  PigeonPlugin(flutter::PluginRegistrarWindows *registrar);

  Version getPlatformVersion();

  virtual ~PigeonPlugin();
};

// static
void PigeonPlugin::RegisterWithRegistrar(
    flutter::PluginRegistrarWindows *registrar) {
  auto plugin = std::make_unique<PigeonPlugin>(registrar);
  registrar->AddPlugin(std::move(plugin));
}

PigeonPlugin::PigeonPlugin(flutter::PluginRegistrarWindows *registrar) {
  ExampleApi::Setup(registrar->messenger(), this);
}

PigeonPlugin::~PigeonPlugin() {}

Version PigeonPlugin::getPlatformVersion(){
  Version v;

  v.setString("abc");

  return v;
}

}  // namespace

void PigeonPluginRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  PigeonPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
