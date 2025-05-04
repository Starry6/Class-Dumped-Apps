@interface AWEUserLoginBaseDataController : NSObject
@property (nonatomic) <AWEUserLoginDataControllerDelegate> delegate;
@property (nonatomic) NSDate startLoginDate;
- (void)setStartLoginDate:;
- (id)startLoginDate;
- (void)trackLoginEvent:error:;
- (void)updateNextPushVC:;
- (id)monitorPageName;
- (void)trackLoginEvent:;
- (void)updateLoginRequestStatus:;
- (void)updateLoginError:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
