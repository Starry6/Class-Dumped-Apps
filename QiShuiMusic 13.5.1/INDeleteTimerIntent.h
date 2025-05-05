@interface INDeleteTimerIntent : INIntent
@property (nonatomic) INTimer targetTimer;
@property (nonatomic) NSNumber deleteMultiple;
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
- (id)deleteMultiple;
- (void)setDeleteMultiple:;
- (id)targetTimer;
- (void)setTargetTimer:;
- (id)initWithTargetTimer:deleteMultiple:;
@end
