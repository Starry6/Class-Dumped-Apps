@interface AWEBDARifleViewShakeMotionHelper : NSObject
@property (nonatomic) NSHashTable subscribers;
@property (nonatomic) BOOL backgrounding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)subscribeShakeMotion:;
- (void)unsubscribeShakeMotion:;
- (void)setBackgrounding:;
- (BOOL)backgrounding;
- (id)subscribers;
- (void).cxx_destruct;
- (void)setSubscribers:;
+ (id)sharedInstance;
@end
