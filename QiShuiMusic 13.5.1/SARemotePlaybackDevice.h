@interface SARemotePlaybackDevice : SARemoteDevice
@property (nonatomic) NSString airPlayRouteId;
@property (nonatomic) NSString entitlementKey;
@property (nonatomic) NSString hashedRouteId;
@property (nonatomic) NSString storefront;
@property (nonatomic) NSString userToken;
@property (nonatomic) NSDictionary utsRequiredRequestKeyValuePairs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStorefront:;
- (id)storefront;
- (id)groupIdentifier;
- (id)userToken;
- (id)encodedClassName;
- (void)setUserToken:;
- (id)hashedRouteId;
- (void)setHashedRouteId:;
- (id)airPlayRouteId;
- (void)setAirPlayRouteId:;
- (id)entitlementKey;
- (void)setEntitlementKey:;
- (id)utsRequiredRequestKeyValuePairs;
- (void)setUtsRequiredRequestKeyValuePairs:;
+ (id)remotePlaybackDevice;
+ (id)remotePlaybackDeviceWithDictionary:context:;
@end
