@interface AWEPlayInteractionLongPressPanelClearModeController : AWEPlayInteractionBaseController
@property (nonatomic) UIView exitView;
@property (nonatomic) UIView bgView;
@property (nonatomic) UIImageView zoomImageView;
- (void)exitPureMode;
- (void)enterPureMode;
- (void)enterInteractionElementPureModeWithInfo:;
- (void)exitInteractionElementPureMode:;
- (void)exitInteractionElementPureModeByOthers:;
- (id)exitView;
- (id)zoomImageView;
- (void)showExitView:;
- (void)exitViewDidTapped:;
- (void)enterPureModeWithoutToast;
- (void)setExitView:;
- (void)setZoomImageView:;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
- (void)viewWillDisappear;
- (void)addObservers;
@end
