@interface BDTuringPresentView : UIWindow
@property (nonatomic) NSMutableSet presentingViews;
@property (nonatomic) NSMutableSet presentingViewControllers;
@property (nonatomic) BDTuringNavigationController turingNavi;
@property (nonatomic) UIWindow preKeyWindow;
- (void)hideVerifyView:;
- (id)presentingViews;
- (void)dismissVerifyView;
- (void)hideTwiceVerifyViewController:;
- (id)preKeyWindow;
- (void)presentTwiceVerifyViewController:;
- (void)presentVerifyView:;
- (id)presentingViewControllers;
- (void)setPreKeyWindow:;
- (void)setPresentingViewControllers:;
- (void)setPresentingViews:;
- (void)setTuringNavi:;
- (id)turingNavi;
- (void)sendEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)defaultPresentView;
@end
