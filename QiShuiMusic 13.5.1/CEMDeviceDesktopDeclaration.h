@interface CEMDeviceDesktopDeclaration : CEMConfigurationBase
@property (nonatomic) NSNumber payloadLocked;
@property (nonatomic) NSString payloadOverridePicturePath;
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
- (id)payloadLocked;
- (void)setPayloadLocked:;
- (id)payloadOverridePicturePath;
- (void)setPayloadOverridePicturePath:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withLocked:withOverridePicturePath:;
@end
