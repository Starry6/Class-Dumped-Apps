@interface BDXFluencyMonitor : NSObject
@property (nonatomic) NSMutableDictionary records;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) double targetTimestamp;
- (void)setTargetTimestamp:;
- (void)startMonitor:;
- (void)stopMonitor:withMonitor:platform:andData:;
- (id)displayLink;
- (id)records;
- (id)init;
- (void)onDisplayLink:;
- (double)targetTimestamp;
- (void).cxx_destruct;
+ (void)sendRecord:withStage:;
+ (id)sharedInstance;
@end
