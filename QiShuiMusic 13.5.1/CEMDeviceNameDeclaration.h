@interface CEMDeviceNameDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadName;
@property (nonatomic) NSNumber payloadAllowDeviceNameModification;
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
- (id)payloadName;
- (void)setPayloadName:;
- (id)payloadAllowDeviceNameModification;
- (void)setPayloadAllowDeviceNameModification:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withName:withAllowDeviceNameModification:;
+ (id)buildRequiredOnlyWithIdentifier:withName:;
@end
