@interface UIViewInProcessAnimationState : UIViewAnimationState
@property (nonatomic) @? animationAndComposerGetter;
@property (nonatomic) BOOL retargeted;
@property (nonatomic) q type;
- (id)init;
- (void)setType:;
- (void)setupWithDuration:delay:view:options:factory:parentState:start:completion:;
- (BOOL)retargeted;
- (long long)type;
- (void)animatePropertyWithKey:view:forceNew:currentValue:targetValue:preTickShouldRemoveCallback:newValueCallback:removedCallback:;
- (void).cxx_destruct;
- (id)actionForLayer:forKey:forView:;
- (id)description;
- (BOOL)shouldAnimatePropertyWithKey:;
- (void)setAnimationAndComposerGetter:;
- (void)setRetargeted:;
- (BOOL)isKeySupported:;
- (void)animatePropertyWithCurrentValue:targetValue:preTickShouldRemoveCallback:newValueCallback:removedCallback:animatableProperty:;
- (id)animationAndComposerGetter;
@end
