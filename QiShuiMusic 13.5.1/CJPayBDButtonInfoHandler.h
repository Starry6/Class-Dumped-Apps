@interface CJPayBDButtonInfoHandler : NSObject
@property (nonatomic) <CJPayTrackerProtocol> trackDelegate;
- (void)execActionWithActionNum:buttonInfo:withActions:fromVC:alertVC:;
- (BOOL)handleButtonInfo:fromVC:errorMsg:withActions:trackDelegate:withAppID:merchantID:;
- (BOOL)handleButtonInfo:fromVC:errorMsg:withActions:withAppID:merchantID:;
- (void)handleButtonInfo:fromVC:errorMsg:withActions:withAppID:merchantID:alertCompletion:;
- (void)p_closeAlertVC:action:;
- (void)p_presentAlertVC:fromVC:;
- (void)p_trackIMServiceWithEvent:buttonInfo:params:;
- (void)p_trackerEvent:buttonInfo:params:;
- (void)setTrackDelegate:;
- (id)trackDelegate;
- (void).cxx_destruct;
+ (id)findPwdUrlWithAppID:merchantID:smchID:;
+ (BOOL)showErrorTips:;
+ (id)shareInstance;
@end
