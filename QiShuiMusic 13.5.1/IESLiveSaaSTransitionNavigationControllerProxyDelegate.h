@interface IESLiveSaaSTransitionNavigationControllerProxyDelegate : NSObject
@property (nonatomic) <UINavigationControllerDelegate> originalDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)forwardingTargetForSelector:;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
+ (id)instanceWithDelegate:;
@end
