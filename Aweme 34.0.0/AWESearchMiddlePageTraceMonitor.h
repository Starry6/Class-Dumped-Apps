@interface AWESearchMiddlePageTraceMonitor : NSObject
@property (nonatomic) NSMutableDictionary performaceData;
@property (nonatomic) NSMutableDictionary baseExtraData;
@property (nonatomic) BOOL beforeSearchInit;
@property (nonatomic) BOOL enableTraceMonitor;
- (void)resetMonitor;
- (void)addMonitorPerfData:extraData:;
- (id)getMiddelMonitorTraceData;
- (void)setEnableTraceMonitor:;
- (void)setPerformaceData:;
- (void)setBaseExtraData:;
- (void)setBeforeSearchInit:;
- (BOOL)enableTraceMonitor;
- (BOOL)beforeSearchInit;
- (id)performaceData;
- (id)baseExtraData;
- (void)startMonitorWithPerfData:withExtraData:beforeSearchInit:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
