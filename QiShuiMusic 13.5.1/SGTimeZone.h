@interface SGTimeZone : NSObject
+ (id)timeZoneForAddress:;
+ (id)sharedDetector;
+ (id)countryCodeForAddress:;
+ (id)timeZoneNameForAddress:withCountryCode:;
@end
