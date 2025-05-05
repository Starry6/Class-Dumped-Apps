@interface ASCredentialRequestContainerViewControllerAnimator : NSObject
@property (nonatomic) BOOL presenting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animateTransition:;
- (id)init;
- (double)transitionDuration:;
- (BOOL)isPresenting;
- (id)initWithPresenting:;
- (id)_viewControllerForTransitionContext:;
@end
