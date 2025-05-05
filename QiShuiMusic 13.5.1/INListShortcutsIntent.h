@interface INListShortcutsIntent : INIntent
@property (nonatomic) q originDevice;
@property (nonatomic) NSArray appTitles;
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
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (long long)originDevice;
- (void)setOriginDevice:;
- (id)appTitles;
- (void)setAppTitles:;
- (id)initWithOriginDevice:appTitles:;
@end
