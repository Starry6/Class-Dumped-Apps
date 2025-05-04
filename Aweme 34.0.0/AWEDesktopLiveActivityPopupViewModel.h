@interface AWEDesktopLiveActivityPopupViewModel : NSObject
@property (nonatomic) AWEDesktopLiveActivityAskPopupModel guideModel;
@property (nonatomic) <AWEDesktopSystemPopupGuideActionDelegateProtocol> actionDelegate;
- (id)guideModel;
- (void)setGuideModel:;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)requestPushSettingStatusWithScene:completion:;
- (id)initWithGuideModel:actionDelegate:;
- (double)guideViewHeight;
- (void)liveActivityAskPopupCanShowWithCompletion:;
- (void)guideViewDidLoad;
- (void)clickMaskAreaAction;
- (void)trackNotificationSwitch:;
- (void)setPushSettingStatusWithScene:value:;
- (void)trackClickWithClickPosition:;
- (id)actionDelegate;
- (void).cxx_destruct;
- (void)setActionDelegate:;
- (void)closeButtonAction;
@end
