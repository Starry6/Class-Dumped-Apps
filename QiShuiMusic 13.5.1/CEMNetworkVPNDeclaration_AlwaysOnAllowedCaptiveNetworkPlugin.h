@interface CEMNetworkVPNDeclaration_AlwaysOnAllowedCaptiveNetworkPlugin : CEMPayloadBase
@property (nonatomic) NSString payloadBundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadBundleIdentifier;
- (void)setPayloadBundleIdentifier:;
+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:;
+ (id)buildRequiredOnlyWithBundleIdentifier:;
@end
