// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service::Set {

/// This is "nn::settings::LanguageCode", which is a NUL-terminated string stored in a u64.
enum class LanguageCode : u64 {
    JA = 0x000000000000616A,
    EN_US = 0x00000053552D6E65,
    FR = 0x0000000000007266,
    DE = 0x0000000000006564,
    IT = 0x0000000000007469,
    ES = 0x0000000000007365,
    ZH_CN = 0x0000004E432D687A,
    KO = 0x0000000000006F6B,
    NL = 0x0000000000006C6E,
    PT = 0x0000000000007470,
    RU = 0x0000000000007572,
    ZH_TW = 0x00000057542D687A,
    EN_GB = 0x00000042472D6E65,
    FR_CA = 0x00000041432D7266,
    ES_419 = 0x00003931342D7365,
    ZH_HANS = 0x00736E61482D687A,
    ZH_HANT = 0x00746E61482D687A,
};

constexpr std::array<LanguageCode, 17> available_language_codes = {{
    LanguageCode::JA,
    LanguageCode::EN_US,
    LanguageCode::FR,
    LanguageCode::DE,
    LanguageCode::IT,
    LanguageCode::ES,
    LanguageCode::ZH_CN,
    LanguageCode::KO,
    LanguageCode::NL,
    LanguageCode::PT,
    LanguageCode::RU,
    LanguageCode::ZH_TW,
    LanguageCode::EN_GB,
    LanguageCode::FR_CA,
    LanguageCode::ES_419,
    LanguageCode::ZH_HANS,
    LanguageCode::ZH_HANT,
}};

class SET final : public ServiceFramework<SET> {
public:
    explicit SET();
    ~SET() = default;

private:
    void GetLanguageCode(Kernel::HLERequestContext& ctx);
    void GetAvailableLanguageCodes(Kernel::HLERequestContext& ctx);
    void GetAvailableLanguageCodeCount(Kernel::HLERequestContext& ctx);
};

} // namespace Service::Set
