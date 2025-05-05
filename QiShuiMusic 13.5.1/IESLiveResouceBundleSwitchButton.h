@interface IESLiveResouceBundleSwitchButton : UIButton
@property (nonatomic) NSString category;
@property (nonatomic) @? bundleDidSwiched;
@property (nonatomic) UIViewController sourceViewController;
- (id)bundleDidSwiched;
- (void)dragMoving:withEvent:;
- (void)setBundleDidSwiched:;
- (void)showSwitchButtonClicked;
- (id)sourceViewController;
- (id)initWithCategory:;
- (void)setSourceViewController:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)category;
@end
