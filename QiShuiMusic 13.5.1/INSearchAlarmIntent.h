@interface INSearchAlarmIntent : INIntent
@property (nonatomic) INAlarmSearch alarmSearch;
@property (nonatomic) q alarmSearchType;
@property (nonatomic) NSArray alarms;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)alarms;
- (void)setAlarms:;
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
- (id)alarmSearch;
- (void)setAlarmSearch:;
- (long long)alarmSearchType;
- (void)setAlarmSearchType:;
- (id)initWithAlarmSearch:alarmSearchType:alarms:;
@end
