@interface CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase
@property (nonatomic) NSString payloadAudioCall;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAudioCall;
- (void)setPayloadAudioCall:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAudioCall:;
@end
