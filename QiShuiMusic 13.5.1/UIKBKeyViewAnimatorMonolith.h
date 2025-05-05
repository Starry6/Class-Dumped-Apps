@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)floatingContentView:isTransitioningFromState:toState:;
- (void)transitionFloatingKeyView:toState:completion:;
- (unsigned long long)controlStateForKeyState:;
- (BOOL)shouldTransitionKeyView:fromState:toState:;
- (void)animateFloatingKeyView:toControlState:;
- (long long)_transitionFromState:toState:;
- (void)addTransitionCompletion:forKeyName:;
- (BOOL)shouldAssertCurrentKeyState:;
- (void)transitionOutKeyView:fromState:toState:completion:;
- (Class)keyViewClassForKey:renderTraits:screenTraits:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)shouldPurgeKeyViews;
- (void)transitionKeyView:fromState:toState:completion:;
- (void)floatingContentView:didFinishTransitioningToState:;
@end
