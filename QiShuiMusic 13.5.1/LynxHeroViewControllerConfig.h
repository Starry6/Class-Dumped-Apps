@interface LynxHeroViewControllerConfig : NSObject
@property (nonatomic) <UINavigationControllerDelegate> previousNavigationDelegate;
@property (nonatomic) <UITabBarControllerDelegate> previousTabBarDelegate;
@property (nonatomic) BOOL enableHeroTransition;
@property (nonatomic) UIViewController vc;
- (BOOL)enableHeroTransition;
- (id)initWithVC:;
- (id)previousNavigationDelegate;
- (id)previousTabBarDelegate;
- (void)setEnableHeroTransition:;
- (void)setPreviousNavigationDelegate:;
- (void)setPreviousTabBarDelegate:;
- (void).cxx_destruct;
- (id)vc;
@end
