@interface AWERecordCustomPresentTransition : NSObject
@property (nonatomic) Q transitionType;
@property (nonatomic) BOOL dismiss;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationForDismissViewWithTransitionContext:;
- (void)animationForPresentedViewWithTransitionContext:;
- (id)initWithTransitionType:dismiss:;
- (void)setTransitionType:;
- (unsigned long long)transitionType;
- (BOOL)dismiss;
- (double)transitionDuration:;
- (void)animateTransition:;
- (void)setDismiss:;
@end
