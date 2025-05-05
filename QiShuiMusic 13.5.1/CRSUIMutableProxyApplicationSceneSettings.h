@interface CRSUIMutableProxyApplicationSceneSettings : CRSUIMutableApplicationSceneSettings
@property (nonatomic) NSString proxiedApplicationBundleIdentifier;
@property (nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon;
@property (nonatomic) q mapStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)copyWithZone:;
- (long long)mapStyle;
- (void)setMapStyle:;
- (id)proxiedApplicationBundleIdentifier;
- (void)setProxiedApplicationBundleIdentifier:;
- (BOOL)proxiedApplicationLinkedOnOrAfterYukon;
- (void)setProxiedApplicationLinkedOnOrAfterYukon:;
@end
