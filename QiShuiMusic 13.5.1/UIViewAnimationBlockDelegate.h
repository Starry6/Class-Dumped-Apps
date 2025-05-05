@interface UIViewAnimationBlockDelegate : NSObject
@property (nonatomic) BOOL _allowsUserInteraction;
@property (nonatomic) BOOL _forcingImmediateCompletion;
@property (nonatomic) UIViewAnimationState _animationState;
- (id)_animationState;
- (void)_setForcingImmediateCompletion:;
- (void)set_animationState:;
- (BOOL)_allowsHitTesting;
- (void)_didEndBlockAnimation:finished:context:;
- (void).cxx_destruct;
- (void)_sendDeferredCompletion:;
- (BOOL)_allowsUserInteraction;
- (void)_willBeginBlockAnimation:context:;
- (BOOL)_forcingImmediateCompletion;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
+ (id)animationBlockDelegateWithDuration:options:start:completion:;
+ (void)setAnimationBlockDelegateWithDuration:options:start:completion:;
@end
