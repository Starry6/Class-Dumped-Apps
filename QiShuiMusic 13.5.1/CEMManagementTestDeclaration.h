@interface CEMManagementTestDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadEcho;
@property (nonatomic) NSString payloadReturnStatus;
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
- (id)payloadEcho;
- (void)setPayloadEcho:;
- (id)payloadReturnStatus;
- (void)setPayloadReturnStatus:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withEcho:withReturnStatus:;
+ (id)buildRequiredOnlyWithIdentifier:withEcho:;
@end
