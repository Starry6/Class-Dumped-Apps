@interface CEMApplicationAnyDeclaration : CEMAssetBase
@property (nonatomic) CEMAssetBaseDescriptor payloadDescriptor;
@property (nonatomic) NSString payloadBundleIdentifier;
@property (nonatomic) NSString payloadDesignatedRequirement;
@property (nonatomic) NSString payloadSigningIdentifier;
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
- (id)payloadBundleIdentifier;
- (void)setPayloadBundleIdentifier:;
- (id)payloadDesignatedRequirement;
- (void)setPayloadDesignatedRequirement:;
- (id)payloadSigningIdentifier;
- (void)setPayloadSigningIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withDescriptor:withBundleIdentifier:withDesignatedRequirement:withSigningIdentifier:;
+ (id)buildRequiredOnlyWithIdentifier:withDescriptor:withBundleIdentifier:;
@end
