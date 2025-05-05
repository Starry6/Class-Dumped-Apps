@interface CEMEventSubscriptionDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadEvents;
@property (nonatomic) CEMEventSubscriptionDeclaration_Schedule payloadSchedule;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadEvents;
- (void)setPayloadEvents:;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadSchedule;
- (void)setPayloadSchedule:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withEvents:withSchedule:;
+ (id)buildRequiredOnlyWithIdentifier:withEvents:;
@end
