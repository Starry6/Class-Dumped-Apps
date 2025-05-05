@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase
@property (nonatomic) NSString payloadApplication;
@property (nonatomic) NSNumber payloadAllowed;
@property (nonatomic) NSString payloadBundleID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadBundleID;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadApplication;
- (void)setPayloadApplication:;
- (void)setPayloadBundleID:;
- (id)payloadAllowed;
- (void)setPayloadAllowed:;
+ (id)allowedPayloadKeys;
+ (id)buildWithApplication:withAllowed:withBundleID:;
+ (id)buildRequiredOnlyWithApplication:withAllowed:withBundleID:;
@end
