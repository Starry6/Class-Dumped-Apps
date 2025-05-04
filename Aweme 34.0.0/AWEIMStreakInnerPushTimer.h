@interface AWEIMStreakInnerPushTimer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)onAppWillEnterForeground;
- (void)startTimerWith:;
- (void)startTimerWhenColdLaunch;
- (double)timeInterval:afterDays:atSeconds:;
- (BOOL)shouldRequestServerToday;
- (void)requestServerIfNeeded;
- (void)requestServer;
- (double)getStreakInnerPushTargetTime;
- (double)getStreakInnerPushRequestTime;
- (id)init;
- (void)dealloc;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
