@interface INShowHomeIntent : INIntent
@property (nonatomic) NSArray filters;
@property (nonatomic) INDateComponentsRange time;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filters;
- (void)setTime:;
- (id)time;
- (id)_dictionaryRepresentation;
- (void)setFilters:;
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
- (id)initWithFilters:time:;
@end
