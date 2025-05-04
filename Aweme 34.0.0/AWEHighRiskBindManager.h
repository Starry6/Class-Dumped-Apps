@interface AWEHighRiskBindManager : NSObject
@property (nonatomic) UIViewController step1vc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isHighRiskEnded;
- (void)didFinishLogoutWithUid:;
- (void)didFinishBindPhone;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (void)handleBroadcastNotification:;
- (id)enterFrom:;
- (BOOL)isHighRiskEnded;
- (void)setIsHighRiskEnded:;
- (void)showViewControllerIfNeededFrom:;
- (void)setStep1vc:;
- (void)finishBind;
- (id)step1vc;
- (void)showIfNeededFromLaunch;
- (BOOL)isHighRiskNumber;
- (void)showSkipAlert;
- (id)init;
- (void)dealloc;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)shouldShow;
+ (id)sharedInstance;
@end
