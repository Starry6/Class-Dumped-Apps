@interface CEMDeviceHomeScreenLayoutDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadDock;
@property (nonatomic) NSArray payloadPages;
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
- (id)payloadDock;
- (void)setPayloadDock:;
- (id)payloadPages;
- (void)setPayloadPages:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withDock:withPages:;
+ (id)buildRequiredOnlyWithIdentifier:withPages:;
@end
