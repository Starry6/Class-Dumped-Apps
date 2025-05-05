@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase
@property (nonatomic) NSString payloadRemoteDeviceID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadRemoteDeviceID;
- (void)setPayloadRemoteDeviceID:;
+ (id)allowedPayloadKeys;
+ (id)buildWithRemoteDeviceID:;
+ (id)buildRequiredOnlyWithRemoteDeviceID:;
@end
