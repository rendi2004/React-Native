#include "pch.h"
#include "ReactPackageProvider.h"
#include "NativeModules.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::ProjectTai::implementation
{

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
    AddAttributedModules(packageBuilder);
}

} // namespace winrt::ProjectTai::implementation
