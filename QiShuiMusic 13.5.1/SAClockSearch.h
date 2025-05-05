@interface SAClockSearch : SADomainCommand
@property (nonatomic) NSNumber alCityId;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSURL identifier;
@property (nonatomic) NSString unlocalizedCityName;
@property (nonatomic) NSString unlocalizedCountryName;
- (void)setCountryCode:;
- (id)countryCode;
- (void)setUnlocalizedCountryName:;
- (id)groupIdentifier;
- (id)unlocalizedCountryName;
- (id)identifier;
- (id)unlocalizedCityName;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)alCityId;
- (void)setIdentifier:;
- (void)setAlCityId:;
- (void)setUnlocalizedCityName:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
