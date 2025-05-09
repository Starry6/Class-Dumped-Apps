@interface HMDFluencyDisplayLink : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> displayLinkQueue;
@property (nonatomic) NSMutableArray callbackObjs;
@property (nonatomic) double lastVSyncInterval;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) BOOL isRunning;
- (void)applicationWillResignActiveNotification:;
- (id)callbackObjs;
- (id)displayLinkQueue;
- (void)frameUpdate:;
- (double)lastVSyncInterval;
- (BOOL)p_tryToStartDisplayLink;
- (BOOL)p_tryToStopDisplayLink;
- (void)registerFrameCallback:completion:;
- (long long)screenMaximumFramesPerSecond;
- (void)setCallbackObjs:;
- (void)setDisplayLinkQueue:;
- (void)setLastVSyncInterval:;
- (void)unregisterFrameCallback:;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)init;
- (void)dealloc;
- (void)setLastTimestamp:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (double)lastTimestamp;
- (void)applicationDidBecomeActiveNotification:;
+ (id)shared;
@end
