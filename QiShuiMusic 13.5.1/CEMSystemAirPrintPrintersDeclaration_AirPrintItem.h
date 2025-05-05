@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase
@property (nonatomic) NSString payloadIPAddress;
@property (nonatomic) NSString payloadResourcePath;
@property (nonatomic) NSNumber payloadPort;
@property (nonatomic) NSNumber payloadForceTLS;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPort;
- (void)setPayloadPort:;
- (id)payloadIPAddress;
- (void)setPayloadIPAddress:;
- (id)payloadResourcePath;
- (void)setPayloadResourcePath:;
- (id)payloadForceTLS;
- (void)setPayloadForceTLS:;
+ (id)allowedPayloadKeys;
+ (id)buildWithIPAddress:withResourcePath:withPort:withForceTLS:;
+ (id)buildRequiredOnlyWithIPAddress:withResourcePath:;
@end
