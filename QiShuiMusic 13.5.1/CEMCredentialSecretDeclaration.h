@interface CEMCredentialSecretDeclaration : CEMAssetBase
@property (nonatomic) CEMAssetBaseDescriptor payloadDescriptor;
@property (nonatomic) CEMAssetBaseReference payloadReference;
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
- (id)payloadReference;
- (void)setPayloadReference:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:withDescriptor:withReference:;
+ (id)buildWithIdentifier:withDescriptor:withReference:;
@end
