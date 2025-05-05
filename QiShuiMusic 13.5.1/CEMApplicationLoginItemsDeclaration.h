@interface CEMApplicationLoginItemsDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadAutoLaunchedApplicationDictionaryManaged;
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
- (id)payloadAutoLaunchedApplicationDictionaryManaged;
- (void)setPayloadAutoLaunchedApplicationDictionaryManaged:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withAutoLaunchedApplicationDictionaryManaged:;
+ (id)buildRequiredOnlyWithIdentifier:withAutoLaunchedApplicationDictionaryManaged:;
@end
