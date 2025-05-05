@interface INSetTimerAttributeIntent : INIntent
@property (nonatomic) INTimer targetTimer;
@property (nonatomic) double toDuration;
@property (nonatomic) INSpeakableString toLabel;
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
- (id)targetTimer;
- (void)setTargetTimer:;
- (double)toDuration;
- (void)setToDuration:;
- (id)toLabel;
- (void)setToLabel:;
- (id)initWithTargetTimer:toDuration:toLabel:;
@end
