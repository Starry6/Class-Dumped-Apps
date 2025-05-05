@interface CEMNetworkCellularDeclaration : CEMConfigurationBase
@property (nonatomic) CEMNetworkCellularDeclaration_AttachAPN payloadAttachAPN;
@property (nonatomic) NSArray payloadAPNs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAttachAPN;
- (void)setPayloadAttachAPN:;
- (id)payloadAPNs;
- (void)setPayloadAPNs:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withAttachAPN:withAPNs:;
@end
