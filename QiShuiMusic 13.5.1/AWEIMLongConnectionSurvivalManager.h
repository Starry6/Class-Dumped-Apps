@interface AWEIMLongConnectionSurvivalManager : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL isBackground;
- (void)handleDidEnterBackgroundNotification:;
- (void)handleWillEnterForegroundNotification:;
- (void)p_loopDetectPingConnected;
- (BOOL)isBackground;
- (id)init;
- (void)setTimer:;
- (void)setIsBackground:;
- (void).cxx_destruct;
- (id)timer;
+ (BOOL)enable;
+ (id)sharedInstance;
+ (double)interval;
+ (void)startMonitor;
@end
