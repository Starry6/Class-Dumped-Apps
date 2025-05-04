@interface AWEPlayInteractionSearchHalfPanelPanelController : AWEPlayInteractionNewBaseController
@property (nonatomic) AWESearchHalfPanelViewController halfPanelViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL showHalfPanel;
- (BOOL)isPanelShowed;
- (void)openSearchHalfPanel:WithLogExtraDict:;
- (BOOL)showHalfPanel;
- (void)seekPlayerTime:completion:;
- (void)setShowHalfPanel:;
- (id)halfPanelViewController;
- (void)setHalfPanelViewController:;
- (void)closeSearchHalfPanel;
- (void)resizeVideoWithTranslation:didChangeFrame:;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)pauseVideo;
- (void)playVideo;
@end
