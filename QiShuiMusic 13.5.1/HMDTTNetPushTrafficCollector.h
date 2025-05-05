@interface HMDTTNetPushTrafficCollector : NSObject
@property (nonatomic) BOOL isRunning;
- (void)unregisterTTNetPushNotification;
- (void)handleTrafficChanged:;
- (void)registerTTNetPushNotification;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
+ (id)sharedInstance;
@end
