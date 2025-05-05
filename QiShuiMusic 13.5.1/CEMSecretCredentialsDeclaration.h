@interface CEMSecretCredentialsDeclaration : CEMPayloadBase
@property (nonatomic) NSString payloadSecret;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)payloadSecret;
- (void)setPayloadSecret:;
+ (id)allowedPayloadKeys;
+ (id)buildWithSecret:;
+ (id)buildRequiredOnlyWithSecret:;
@end
