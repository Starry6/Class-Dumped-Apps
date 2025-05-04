@interface AWETransitionNavigationControllerProxyDelegate : NSObject
@property (nonatomic) <UINavigationControllerDelegate> originalDelegate;
@property (nonatomic) BOOL originalEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOriginalEnabled:;
- (BOOL)originalEnabled;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)forwardingTargetForSelector:;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id)navigationController:interactionControllerForAnimationController:;
- (void)navigationController:didShowViewController:animated:;
- (void)navigationController:willShowViewController:animated:;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
+ (id)instanceWithDelegate:;
@end
