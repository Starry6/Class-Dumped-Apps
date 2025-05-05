@interface SAWeatherLocationSearch : SADomainCommand
@property (nonatomic) NSURL identifier;
@property (nonatomic) NSString locationId;
- (id)groupIdentifier;
- (id)identifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:;
- (id)locationId;
- (void)setLocationId:;
+ (id)locationSearch;
+ (id)locationSearchWithDictionary:context:;
@end
