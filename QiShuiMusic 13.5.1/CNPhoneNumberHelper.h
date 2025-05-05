@interface CNPhoneNumberHelper : NSObject
+ (id)defaultCountryCode;
+ (id)lastFourDigitsForNumber:;
+ (id)countryCodeForNumber:;
+ (id)internationalizedFormattedNumber:countryCode:;
+ (id)internationalizedUnformattedNumber:countryCode:;
+ (BOOL)isStringPhoneNumber:;
+ (id)makePhoneNumberRegex;
@end
