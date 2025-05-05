@interface IESIMTransitionNavigationControllerProxyDelegate : NSObject
@property (nonatomic) <UINavigationControllerDelegate> originalDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (void)navigationController:didShowViewController:animated:;
- (void).cxx_destruct;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)forwardingTargetForSelector:;
- (id)navigationController:interactionControllerForAnimationController:;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
+ (id)instanceWithDelegate:;
@end
