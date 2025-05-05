@interface CEMSystemDiskRecordingDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadBurnSupport;
@property (nonatomic) NSNumber payloadProhibitBurn;
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
- (id)payloadBurnSupport;
- (void)setPayloadBurnSupport:;
- (id)payloadProhibitBurn;
- (void)setPayloadProhibitBurn:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withBurnSupport:withProhibitBurn:;
+ (id)buildRequiredOnlyWithIdentifier:withBurnSupport:withProhibitBurn:;
@end
