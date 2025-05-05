@interface MTPageRenderEventHandler : MTEventHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <MTPageRenderEventHandlerDelegate> delegate;
- (id)eventType;
- (id)knownFields;
- (id)metricsDataWithPageId:pageType:pageContext:eventData:;
- (id)eventVersion:;
- (void)didCreateMetricsData:;
- (id)xpSessionDuration:;
- (id)xpSamplingPercentageUsers:;
- (id)metricsDataWithPerfMeasurement:;
@end
