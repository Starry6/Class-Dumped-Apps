@interface CEMPasscodeScreensaverUserDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadModulePath;
@property (nonatomic) NSNumber payloadIdleTime;
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
- (id)payloadModulePath;
- (void)setPayloadModulePath:;
- (id)payloadIdleTime;
- (void)setPayloadIdleTime:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withModulePath:withIdleTime:;
@end
