@interface CPAnalyticsMetricsDestination : NSObject
@property (nonatomic) NSMapTable eventRoutes;
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (void)sendCoreAnalyticsEventWithCustomConfig:eventRoute:;
- (id)_eventRoutesFromConfig:;
- (id)eventRoutes;
- (id)initWithConfig:cpAnalyticsInstance:;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:withPropertiesToInclude:;
- (void)processEvent:;
- (void).cxx_destruct;
@end
