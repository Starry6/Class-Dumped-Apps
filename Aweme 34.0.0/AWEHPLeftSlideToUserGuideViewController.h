@interface AWEHPLeftSlideToUserGuideViewController : UIViewController
@property (nonatomic) AWEHPLeftSlideToUserGuideView guideView;
@property (nonatomic) <AWEHPLeftSlideToUserGuideViewControllerDelegate> delegate;
- (void)stopAutoDismissAnimation;
- (void)showOnVC:dismissCallBack:autoDismissWithAnimation:;
- (id)createViewConfig;
- (id)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)updateWithContext:;
- (id)guideView;
- (void)setGuideView:;
@end
