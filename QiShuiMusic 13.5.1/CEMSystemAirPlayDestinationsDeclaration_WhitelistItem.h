@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase
@property (nonatomic) NSString payloadDeviceID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDeviceID;
- (void)setPayloadDeviceID:;
+ (id)allowedPayloadKeys;
+ (id)buildWithDeviceID:;
+ (id)buildRequiredOnlyWithDeviceID:;
@end
