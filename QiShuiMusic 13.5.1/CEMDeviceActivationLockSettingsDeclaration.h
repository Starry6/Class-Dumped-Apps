@interface CEMDeviceActivationLockSettingsDeclaration : CEMConfigurationBase
@property (nonatomic) NSNumber payloadActivationLockAllowedWhileSupervised;
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
- (id)payloadActivationLockAllowedWhileSupervised;
- (void)setPayloadActivationLockAllowedWhileSupervised:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withActivationLockAllowedWhileSupervised:;
@end
