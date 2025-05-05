@interface SAWeatherLocationAdd : SADomainCommand
@property (nonatomic) SAWeatherLocation weatherLocation;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)weatherLocation;
- (void)setWeatherLocation:;
+ (id)locationAdd;
+ (id)locationAddWithDictionary:context:;
@end
