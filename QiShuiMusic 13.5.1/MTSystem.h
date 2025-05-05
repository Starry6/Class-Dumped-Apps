@interface MTSystem : MTObject
@property (nonatomic) MTEnvironment environment;
@property (nonatomic) MTEventRecorder eventRecorder;
@property (nonatomic) <MTEventFilter> eventFilter;
@property (nonatomic) <MTEventFilter> treatmentFilter;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)setEnvironment:;
- (id)environment;
- (void).cxx_destruct;
- (id)eventRecorder;
- (void)setQueue:;
- (id)queue;
- (id)eventFilter;
- (void)setEventFilter:;
- (id)initWithMetricsKit:;
- (id)treatmentFilter;
- (void)setEventFilterWithJavaScriptFunction:context:operationQueue:;
- (void)setEventRecorder:;
- (void)setTreatmentFilter:;
@end
