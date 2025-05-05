@interface CEMCredentialSCEPDeclaration : CEMAssetBase
@property (nonatomic) CEMAssetBaseDescriptor payloadDescriptor;
@property (nonatomic) CEMCredentialSCEPDeclaration_SCEP payloadSCEP;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDescriptor;
- (void)setPayloadDescriptor:;
- (id)payloadSCEP;
- (void)setPayloadSCEP:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withDescriptor:withSCEP:;
+ (id)buildRequiredOnlyWithIdentifier:withDescriptor:withSCEP:;
@end
