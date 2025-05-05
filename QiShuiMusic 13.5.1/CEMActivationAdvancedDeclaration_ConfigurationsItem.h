@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase
@property (nonatomic) NSString payloadIdentifier;
@property (nonatomic) CEMAnyPayload payloadOverrides;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadIdentifier;
- (void)setPayloadIdentifier:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadOverrides;
- (void)setPayloadOverrides:;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withOverrides:;
@end
