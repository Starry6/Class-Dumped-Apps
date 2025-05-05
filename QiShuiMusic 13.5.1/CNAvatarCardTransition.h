@interface CNAvatarCardTransition : NSObject
@property (nonatomic) UIPanGestureRecognizer gestureRecognizer;
@property (nonatomic) <UIViewControllerContextTransitioning> context;
@property (nonatomic) UIView presentedView;
@property (nonatomic) BOOL interactive;
@property (nonatomic) BOOL reversed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReversed:;
- (void)animateTransition:;
- (void)setGestureRecognizer:;
- (id)presentedView;
- (double)transitionDuration:;
- (id)context;
- (BOOL)reversed;
- (id)gestureRecognizer;
- (BOOL)interactive;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setPresentedView:;
@end
