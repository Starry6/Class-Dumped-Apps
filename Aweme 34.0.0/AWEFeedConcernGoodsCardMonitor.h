@interface AWEFeedConcernGoodsCardMonitor : NSObject
@property (nonatomic) @? fpsCallback;
@property (nonatomic) NSMutableArray fpsRecords;
@property (nonatomic) NSObject<OS_dispatch_queue> sampleQueue;
- (void)setFpsCallback:;
- (id)fpsCallback;
- (void)setSampleQueue:;
- (id)sampleQueue;
- (void)startFPSMonitor;
- (id)getFeedGoodsCardFPSMonitorData;
- (void)setFpsRecords:;
- (id)fpsRecords;
- (void)clearMonitorData;
- (id)init;
- (void).cxx_destruct;
- (id)stop;
- (void)start;
- (void)stopMonitor;
+ (BOOL)collectEnabled;
+ (id)settings;
@end
