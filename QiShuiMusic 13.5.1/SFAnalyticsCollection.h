@interface SFAnalyticsCollection : NSObject
@property (nonatomic) NSMutableDictionary matchingRules;
@property (nonatomic) @? tearDownMetricsHook;
@property (nonatomic) <SFAnalyticsCollectionAction> actions;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void)dealloc;
- (void)setActions:;
- (id)actions;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (id)initWithActionInterface:;
- (id)parseCollection:logger:;
- (void)setupMetricsHook:;
- (void)onQueue_stopMetricCollection;
- (void)stopMetricCollection;
- (void)loadCollection:;
- (void)storeCollection:logger:;
- (unsigned int)match:eventClass:attributes:bucket:logger:;
- (id)matchingRules;
- (void)setMatchingRules:;
- (id)tearDownMetricsHook;
- (void)setTearDownMetricsHook:;
@end
