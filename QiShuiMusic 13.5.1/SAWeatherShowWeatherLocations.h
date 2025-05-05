@interface SAWeatherShowWeatherLocations : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showWeatherLocations;
+ (id)showWeatherLocationsWithDictionary:context:;
@end
