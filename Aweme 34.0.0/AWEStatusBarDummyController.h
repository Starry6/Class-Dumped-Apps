@interface AWEStatusBarDummyController : UIViewController
@property (nonatomic) AWEStatusBarDummyControllerStatusBarInfo statusBarInfo;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setStatusBarHidden:style:;
- (id)statusBarInfo;
- (void)setStatusBarInfo:;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (id)initWith:;
@end
