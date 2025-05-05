@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination
@property (nonatomic) NSSet trackedIntervalNames;
@property (nonatomic) NSSet ignoredIntervalNames;
- (void)updateWithConfig:;
- (id)initWithConfig:cpAnalyticsInstance:;
- (void)_handleEvent:withUnknownIntervalName:;
- (void)processEvent:;
- (void)sendDashboardIntervalEventForEvent:;
- (void)setIgnoredIntervalNames:;
- (void).cxx_destruct;
- (id)ignoredIntervalNames;
- (id)_intervalNamesForKey:inConfiguration:;
- (void)setTrackedIntervalNames:;
- (id)trackedIntervalNames;
@end
