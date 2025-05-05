@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem : CEMPayloadBase
@property (nonatomic) NSString payloadType;
@property (nonatomic) NSNumber payloadPort;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadType;
- (void)setPayloadType:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPort;
- (void)setPayloadPort:;
+ (id)allowedPayloadKeys;
+ (id)buildWithType:withPort:;
+ (id)buildRequiredOnlyWithType:;
@end
