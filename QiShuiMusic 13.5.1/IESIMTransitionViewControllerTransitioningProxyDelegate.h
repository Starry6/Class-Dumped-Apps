@interface IESIMTransitionViewControllerTransitioningProxyDelegate : NSObject
@property (nonatomic) <UIViewControllerTransitioningDelegate> originalDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (BOOL)respondsToSelector:;
- (id)interactionControllerForPresentation:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
+ (id)instanceWithDelegate:;
@end
