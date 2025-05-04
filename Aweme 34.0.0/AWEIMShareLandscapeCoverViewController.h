@interface AWEIMShareLandscapeCoverViewController : UIViewController
@property (nonatomic) UIViewController subVC;
@property (nonatomic) UIViewController targetVC;
@property (nonatomic) AWEIMShareLandscapeCoverView leftCoverView;
@property (nonatomic) UIView rightView;
- (id)targetVC;
- (void)setTargetVC:;
- (id)subVC;
- (id)initWithSubVC:andTargetVC:;
- (void)setSubVC:;
- (id)leftCoverView;
- (void)setLeftCoverView:;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)rightView;
- (void)setRightView:;
@end
