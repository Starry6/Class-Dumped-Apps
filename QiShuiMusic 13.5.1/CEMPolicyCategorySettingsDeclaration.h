@interface CEMPolicyCategorySettingsDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadDefaultBehavior;
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
- (id)payloadDefaultBehavior;
- (void)setPayloadDefaultBehavior:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withDefaultBehavior:;
@end
