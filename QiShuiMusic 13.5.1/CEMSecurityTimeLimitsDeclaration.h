@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase
@property (nonatomic) NSNumber payloadFamilyControlsEnabled;
@property (nonatomic) CEMSecurityTimeLimitsDeclaration_TimeLimits payloadTimeLimits;
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
- (id)payloadFamilyControlsEnabled;
- (void)setPayloadFamilyControlsEnabled:;
- (id)payloadTimeLimits;
- (void)setPayloadTimeLimits:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withFamilyControlsEnabled:withTimeLimits:;
+ (id)buildRequiredOnlyWithIdentifier:withFamilyControlsEnabled:;
@end
