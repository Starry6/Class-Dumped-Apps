@interface SAWeatherLocationDelete : SADomainCommand
@property (nonatomic) SAWeatherLocation weatherLocation;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)weatherLocation;
- (void)setWeatherLocation:;
+ (id)locationDelete;
+ (id)locationDeleteWithDictionary:context:;
@end
