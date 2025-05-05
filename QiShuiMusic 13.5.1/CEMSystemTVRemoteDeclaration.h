@interface CEMSystemTVRemoteDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadAllowedRemotes;
@property (nonatomic) NSArray payloadAllowedTVs;
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
- (id)payloadAllowedRemotes;
- (void)setPayloadAllowedRemotes:;
- (id)payloadAllowedTVs;
- (void)setPayloadAllowedTVs:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withAllowedRemotes:withAllowedTVs:;
@end
