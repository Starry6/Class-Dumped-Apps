@interface CEMSystemSearchDeclaration : CEMConfigurationBase
@property (nonatomic) NSNumber payloadAllowSpotlightInternetResults;
@property (nonatomic) NSNumber payloadAllowDefinitionLookup;
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
- (id)payloadAllowSpotlightInternetResults;
- (void)setPayloadAllowSpotlightInternetResults:;
- (id)payloadAllowDefinitionLookup;
- (void)setPayloadAllowDefinitionLookup:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withAllowSpotlightInternetResults:withAllowDefinitionLookup:;
@end
