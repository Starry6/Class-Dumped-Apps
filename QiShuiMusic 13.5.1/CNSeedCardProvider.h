@interface CNSeedCardProvider : NSObject
+ (id)nearestAvailableDataForCountryCode:;
+ (id)dataForCountryCode:;
+ (id)dataForEveryCountry;
+ (id)bundleWithSeedCards;
@end
