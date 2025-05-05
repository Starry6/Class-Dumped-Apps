@interface AWEIMSpeedUpModalTransitionAnimator : NSObject
@property (nonatomic) BOOL dismiss;
@property (nonatomic) double transitionDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDismiss:;
- (BOOL)isDismiss;
- (void)animateTransition:;
- (double)transitionDuration:;
- (double)transitionDuration;
- (void)setTransitionDuration:;
- (void)setDismiss:;
@end
