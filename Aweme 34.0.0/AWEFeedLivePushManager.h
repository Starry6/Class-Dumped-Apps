@interface AWEFeedLivePushManager : NSObject
@property (nonatomic) NSTimer timer;
- (void)showPush:;
- (void)handleNewBroadcastNotification:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
