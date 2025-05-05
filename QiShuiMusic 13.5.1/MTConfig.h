@interface MTConfig : MTObject
@property (nonatomic) NSDictionary debugSource;
@property (nonatomic) <MTConfigDelegate> delegate;
@property (nonatomic) q eventDataTimeout;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)sources;
- (id)configValueForKeyPath:sources:;
- (id)injectedSource;
- (BOOL)_isEventDataTimeoutUnset;
- (long long)eventDataTimeout;
- (BOOL)disabledForSources:;
- (id)denylistedEventsForSources:;
- (id)denylistedFieldsForSources:;
- (id)deResFieldsForSources:;
- (BOOL)metricsDisabledOrDenylistedEvent:sources:;
- (void)removeDenylistedFields:sources:;
- (void)applyDeRes:sources:;
- (id)computeWithConfigSources:;
- (id)configValueForKeyPath:default:;
- (BOOL)metricsDisabledOrBlacklistedEvent:sources:;
- (void)removeBlacklistedFields:sources:;
- (id)blacklistedEventsForSources:;
- (id)blacklistedFieldsForSources:;
- (void)setEventDataTimeout:;
- (id)debugSource;
- (void)setDebugSource:;
@end
