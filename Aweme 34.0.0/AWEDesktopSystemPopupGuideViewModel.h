@interface AWEDesktopSystemPopupGuideViewModel : NSObject
@property (nonatomic) AWEDesktopSystemPopupGuideModel guideModel;
@property (nonatomic) <AWEDesktopSystemPopupGuideActionDelegateProtocol> actionDelegate;
@property (nonatomic) AWEUGDesktopChannelBaseViewController controller;
- (id)guideModel;
- (void)setGuideModel:;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id)initWithGuideModel:actionDelegate:;
- (double)guideViewHeight;
- (void)guideViewDidLoad;
- (void)clickMaskAreaAction;
- (id)getTrackPopType;
- (BOOL)needToEnablePip;
- (void)desktopButtonAction;
- (id)initWithGuideModel:actionDelegate:controller:;
- (void)prepareGuideViewResource;
- (void)recordWidgetShowTime;
- (void)trackGuideWithAction:;
- (void)trackWithAction:;
- (void)openDesktopShortCut;
- (id)actionDelegate;
- (void).cxx_destruct;
- (id)controller;
- (void)setActionDelegate:;
- (void)closeButtonAction;
@end
