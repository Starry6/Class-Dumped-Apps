@interface AWEIMImpl.StreakLiveActivityManager : NSObject
- (void)didFinishLogin;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)userDidSendMessageWithNoti:;
- (void)transferToMessageVCWithNoti:;
- (void)appDidBecomeActiveWithNoti:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
