@interface CNAddressFormats : NSObject
+ (id)addressFormats;
+ (id)supportedCountries;
+ (id)makeSupportedCountries;
+ (id)defaultKeyboardSettingsDictionary;
+ (id)addressFormatForCountryCode:;
+ (id)countryCodeByLocaleLookup;
+ (id)countryCodeByGlobalDefaultsLookup;
+ (id)fallbackCountryCode;
+ (id)usaStateNames;
+ (id)usaStateAbbreviations;
@end
