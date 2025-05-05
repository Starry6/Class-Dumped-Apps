@interface CEMSystemNotificationsDeclaration : CEMConfigurationBase
@property (nonatomic) NSArray payloadNotificationSettings;
@property (nonatomic) NSNumber payloadAllowNotificationsModification;
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
- (id)payloadNotificationSettings;
- (void)setPayloadNotificationSettings:;
- (id)payloadAllowNotificationsModification;
- (void)setPayloadAllowNotificationsModification:;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:withNotificationSettings:withAllowNotificationsModification:;
+ (id)buildRequiredOnlyWithIdentifier:withNotificationSettings:;
@end
