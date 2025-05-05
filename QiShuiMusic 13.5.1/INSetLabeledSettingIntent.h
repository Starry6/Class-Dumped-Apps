@interface INSetLabeledSettingIntent : INIntent
@property (nonatomic) INSettingMetadata settingMetadata;
@property (nonatomic) NSString labeledValue;
@property (nonatomic) INTemporalEventTrigger temporalEventTrigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)labeledValue;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (void)setLabeledValue:;
- (id)temporalEventTrigger;
- (void)setTemporalEventTrigger:;
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
- (id)initWithSettingMetadata:labeledValue:temporalEventTrigger:;
@end
