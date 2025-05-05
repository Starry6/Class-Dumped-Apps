@interface CEMNetworkVPNAppToAppLayerMappingDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadAppLayerVPNMapping;
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
- (id)payloadAppLayerVPNMapping;
- (void)setPayloadAppLayerVPNMapping:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withAppLayerVPNMapping:;
+ (id)buildRequiredOnlyWithIdentifier:withAppLayerVPNMapping:;
@end
