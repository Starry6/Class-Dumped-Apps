@interface INSetBinarySettingIntent : INIntent
@property (nonatomic) INSettingMetadata settingMetadata;
@property (nonatomic) q binaryValue;
@property (nonatomic) INTemporalEventTrigger temporalEventTrigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (long long)binaryValue;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
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
- (void)setBinaryValue:;
- (void)setSettingMetadata:;
- (id)initWithSettingMetadata:binaryValue:temporalEventTrigger:;
@end
