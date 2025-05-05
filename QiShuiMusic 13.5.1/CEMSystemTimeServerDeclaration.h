@interface CEMSystemTimeServerDeclaration : CEMConfigurationBase
@property (nonatomic) NSString payloadTimeServer;
@property (nonatomic) NSString payloadTimeZone;
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
- (id)payloadTimeServer;
- (void)setPayloadTimeServer:;
- (id)payloadTimeZone;
- (void)setPayloadTimeZone:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withTimeServer:withTimeZone:;
@end
