@interface INOpenSettingIntent : INIntent
@property (nonatomic) INSettingMetadata settingMetadata;
@property (nonatomic) INSpeakableString searchQuery;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)searchQuery;
- (void)setSearchQuery:;
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
- (id)settingMetadata;
- (void)setSettingMetadata:;
- (id)initWithSettingMetadata:searchQuery:;
@end
