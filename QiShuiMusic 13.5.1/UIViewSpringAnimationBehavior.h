@interface UIViewSpringAnimationBehavior : NSObject
@property (nonatomic) double inertialTargetSmoothing;
@property (nonatomic) double inertialProjectionDeceleration;
- (id)init;
- (double)inertialProjectionDeceleration;
- (void)setDampingRatio:response:;
- (void)setInertialProjectionDeceleration:;
- (double)inertialTargetSmoothing;
- (id)parametersForTransitionFromState:toState:;
- (void)setInertialTargetSmoothing:;
- (void)setTrackingDampingRatio:response:dampingRatioSmoothing:responseSmoothing:;
+ (id)behaviorWithDampingRatio:response:;
@end
