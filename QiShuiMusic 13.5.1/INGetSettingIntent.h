@interface INGetSettingIntent : INIntent
@property (nonatomic) INSettingMetadata settingMetadata;
@property (nonatomic) q confirmationValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)initWithSettingMetadata:;
- (id)settingMetadata;
- (void)setSettingMetadata:;
- (long long)confirmationValue;
- (void)setConfirmationValue:;
- (id)initWithSettingMetadata:confirmationValue:;
@end
