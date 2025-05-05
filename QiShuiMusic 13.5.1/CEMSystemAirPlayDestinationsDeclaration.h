@interface CEMSystemAirPlayDestinationsDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadWhitelist;
@property (nonatomic) NSArray payloadPasswords;
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
- (id)payloadWhitelist;
- (void)setPayloadWhitelist:;
- (id)payloadPasswords;
- (void)setPayloadPasswords:;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withWhitelist:withPasswords:;
@end
