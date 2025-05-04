@interface AWEIMMessageTabTransitionComponent : AWEIMComponentBase
@property (nonatomic) Q direction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (unsigned long long)messageTabTransition_destinatedType;
- (id)messageTabTransition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)messageTabTransition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (BOOL)messageTabTransition_shouldStartInteractiveTranstionToVC:;
- (void)messageTabTransition_didPopDoneTransitionWithContext:;
- (void)messageTabTransition_didCancelPercentDrivenTransitionWithContext:;
- (unsigned long long)direction;
- (void)setDirection:;
+ (BOOL)canCreateComponentWithContext:;
@end
