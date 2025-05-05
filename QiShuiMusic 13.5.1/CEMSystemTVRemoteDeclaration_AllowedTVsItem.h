@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase
@property (nonatomic) NSString payloadTVDeviceID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadTVDeviceID;
- (void)setPayloadTVDeviceID:;
+ (id)allowedPayloadKeys;
+ (id)buildWithTVDeviceID:;
+ (id)buildRequiredOnlyWithTVDeviceID:;
@end
