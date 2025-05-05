@interface SALocalSearchGeoServicesData : SADomainObject
@property (nonatomic) NSArray additionalEnabledTransitMarkets;
@property (nonatomic) NSData clientMetadata;
@property (nonatomic) NSString environment;
- (void)setEnvironment:;
- (id)groupIdentifier;
- (id)environment;
- (id)encodedClassName;
- (void)setClientMetadata:;
- (id)clientMetadata;
- (id)additionalEnabledTransitMarkets;
- (void)setAdditionalEnabledTransitMarkets:;
+ (id)geoServicesData;
+ (id)geoServicesDataWithDictionary:context:;
@end
