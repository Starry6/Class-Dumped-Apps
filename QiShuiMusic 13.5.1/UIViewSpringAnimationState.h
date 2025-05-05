@interface UIViewSpringAnimationState : UIViewAnimationState
- (void)generateSpringPropertiesForDuration:damping:velocity:;
- (id)animationForLayer:forKey:forView:;
- (id)_defaultAnimationForKey:;
- (void)setupWithDuration:delay:view:options:factory:parentState:start:completion:;
+ (id)defaultSpringAnimationForKey:mass:stiffness:damping:velocity:;
+ (void)computeDerivedSpringParameters:zeta:mass:velocity:epsilon:stiffness:damping:debugging:;
+ (void)computeDerivedSpringParameters:zeta:mass:velocity:epsilon:stiffness:damping:;
@end
