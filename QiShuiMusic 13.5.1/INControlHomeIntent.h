@interface INControlHomeIntent : INIntent
@property (nonatomic) INHomeUserTask userTask;
@property (nonatomic) NSArray filters;
@property (nonatomic) INDateComponentsRange time;
@property (nonatomic) NSArray contents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filters;
- (void)setTime:;
- (id)time;
- (id)contents;
- (id)_dictionaryRepresentation;
- (void)setFilters:;
- (void)setContents:;
- (id)initWithContents:;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (BOOL)_hasTitle;
- (id)_typedBackingStore;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)_initWithIdentifier:backingStore:schema:error:;
- (id)userTask;
- (void)setUserTask:;
- (id)initWithUserTask:filters:time:;
- (id)initWithUserTask:filters:;
- (id)_titleWithLocalizer:fromBundleURL:;
- (id)_subtitleWithLocalizer:fromBundleURL:;
@end
