@interface AWETransitionViewControllerTransitioningProxyDelegate : NSObject
@property (nonatomic) <UIViewControllerTransitioningDelegate> originalDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (id)forwardingTargetForSelector:;
- (id)interactionControllerForDismissal:;
- (BOOL)respondsToSelector:;
- (id)interactionControllerForPresentation:;
- (void).cxx_destruct;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
+ (id)instanceWithDelegate:;
@end
