@interface IESLiveSaaSFeedDrawerAnimator : NSObject
@property (nonatomic) BOOL isDismiss;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDismiss;
- (void)performDismissAnimation:;
- (void)performPresentAnimation:;
- (void)setIsDismiss:;
- (void)timingFunctionAnimations:comletion:with:;
- (void)animateTransition:;
- (double)transitionDuration:;
+ (id)animatorForDismiss:;
@end
