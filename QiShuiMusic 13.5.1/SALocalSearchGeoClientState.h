@interface SALocalSearchGeoClientState : SAAceClientState
@property (nonatomic) NSArray additionalEnabledTransitMarkets;
@property (nonatomic) NSString environment;
- (void)setEnvironment:;
- (id)groupIdentifier;
- (id)environment;
- (id)encodedClassName;
- (id)additionalEnabledTransitMarkets;
- (void)setAdditionalEnabledTransitMarkets:;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:context:;
@end
