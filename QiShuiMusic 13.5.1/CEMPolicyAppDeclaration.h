@interface CEMPolicyAppDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadMode;
@property (nonatomic) NSArray payloadApps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPayloadApps:;
- (void)setPayloadMode:;
- (id)payloadMode;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadApps;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:withMode:;
+ (id)buildWithIdentifier:withMode:withApps:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
@end
