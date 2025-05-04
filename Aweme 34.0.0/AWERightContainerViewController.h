@interface AWERightContainerViewController : UIViewController
@property (nonatomic) UIPanGestureRecognizer globalPan;
@property (nonatomic) UIImageView closeBtn;
@property (nonatomic) UIView statusBarMaskView;
@property (nonatomic) AWEInsideSplitScreenItemDetail splitDetail;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)bindGesture;
- (void)setSplitDetail:;
- (id)statusBarMaskView;
- (id)splitDetail;
- (void)setGlobalPan:;
- (id)globalPan;
- (void)setStatusBarMaskView:;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
