@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase
@property (nonatomic) NSString payloadDeviceName;
@property (nonatomic) NSString payloadPassword;
@property (nonatomic) NSString payloadDeviceID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPassword;
- (void)setPayloadPassword:;
- (id)payloadDeviceID;
- (void)setPayloadDeviceID:;
- (id)payloadDeviceName;
- (void)setPayloadDeviceName:;
+ (id)allowedPayloadKeys;
+ (id)buildWithDeviceName:withPassword:withDeviceID:;
+ (id)buildRequiredOnlyWithDeviceName:withPassword:withDeviceID:;
@end
