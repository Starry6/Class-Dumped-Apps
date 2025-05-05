@interface CEMSystemDashboardDeclaration : CEMConfigurationBase
@property (nonatomic) NSNumber payloadWhiteListEnabled;
@property (nonatomic) NSArray payloadWhiteList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadWhiteListEnabled;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (void)setPayloadWhiteListEnabled:;
- (id)payloadWhiteList;
- (void)setPayloadWhiteList:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withWhiteListEnabled:withWhiteList:;
+ (id)buildRequiredOnlyWithIdentifier:withWhiteListEnabled:withWhiteList:;
@end
