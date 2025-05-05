@interface CEMNetworkCellularDeclaration_AttachAPN : CEMPayloadBase
@property (nonatomic) NSString payloadName;
@property (nonatomic) NSString payloadAuthenticationType;
@property (nonatomic) NSString payloadUsername;
@property (nonatomic) NSString payloadPassword;
@property (nonatomic) NSNumber payloadAllowedProtocolMask;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPassword;
- (void)setPayloadPassword:;
- (id)payloadName;
- (void)setPayloadName:;
- (id)payloadAuthenticationType;
- (void)setPayloadAuthenticationType:;
- (id)payloadUsername;
- (void)setPayloadUsername:;
- (id)payloadAllowedProtocolMask;
- (void)setPayloadAllowedProtocolMask:;
+ (id)allowedPayloadKeys;
+ (id)buildWithName:withAuthenticationType:withUsername:withPassword:withAllowedProtocolMask:;
+ (id)buildRequiredOnlyWithName:;
@end
