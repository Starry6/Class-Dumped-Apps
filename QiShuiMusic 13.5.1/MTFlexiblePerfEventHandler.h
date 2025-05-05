@interface MTFlexiblePerfEventHandler : MTEventHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <MTFlexiblePerfEventHandlerDelegate> delegate;
- (id)knownFields;
- (id)metricsDataWithEventType:eventData:;
- (BOOL)mtIncludeBaseFields;
- (id)metricsDataWithPerfMeasurement:;
- (id)xpSamplingPercentage:;
@end
