@interface PLSeasonsUtilities : NSObject
+ (BOOL)isCountryCodePartOfSouthernHemisphere:;
+ (BOOL)isCountryCodePartOfNorthernHemisphere:;
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:;
+ (id)_seasonKeyForMonthNumber:locale:;
+ (id)_seasonNameForKey:;
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:;
+ (id)_seasonCountryCodesDictionary;
+ (id)localizedSeasonNameForDate:calendar:locale:;
@end
