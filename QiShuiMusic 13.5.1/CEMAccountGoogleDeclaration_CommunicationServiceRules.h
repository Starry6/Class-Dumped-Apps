@interface CEMAccountGoogleDeclaration_CommunicationServiceRules : CEMPayloadBase
@property (nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers payloadDefaultServiceHandlers;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDefaultServiceHandlers;
- (void)setPayloadDefaultServiceHandlers:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:;
@end
