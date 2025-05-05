@interface CNVCardADRParser : NSObject
+ (id)valueWithParser:;
+ (id)parseStreetAddressComponentsWithParser:;
+ (BOOL)parseNextStringWithParser:components:key:;
+ (void)collectStreetAddressComponentsIntoSingleKeyInAddress:;
+ (id)addressValueWithPrimaryAddress:extendedAddress:poBox:;
+ (void)processExtensionValuesForLines:validCountryCodes:parser:;
+ (id)countryCodeForLine:validCountryCodes:parser:;
@end
