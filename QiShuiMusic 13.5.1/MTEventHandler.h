@interface MTEventHandler : MTEventDataProvider
@property (nonatomic) NSString registeredName;
@property (nonatomic) NSArray registeredEventData;
@property (nonatomic) NSArray postProcessingBlocks;
@property (nonatomic) <MTEventHandlerDelegate> delegate;
- (id)eventType;
- (void).cxx_destruct;
- (id)knownFields;
- (id)metricsDataWithEventData:;
- (id)registeredName;
- (void)setRegisteredName:;
- (id)eventVersion:;
- (void)didCreateMetricsData:;
- (BOOL)mtIncludeBaseFields;
- (id)metricsDataWithFields:;
- (id)metricsDataWithCallerSuppliedFields:;
- (void)addPostProcessingBlock:;
- (id)registeredEventData;
- (void)setRegisteredEventData:;
- (id)postProcessingBlocks;
- (void)setPostProcessingBlocks:;
+ (id)currentEventContextCache;
+ (void)createEventContextCache;
+ (void)clearEventContextCache;
+ (id)cachableWithKey:onBackgroundThread:block:;
@end
