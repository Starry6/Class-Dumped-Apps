@interface UIApplicationSceneDeactivationManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeAssertion:;
- (id)init;
- (id)assertions;
- (BOOL)_areEligibleSettings:;
- (void)_setDeactivationReasons:onScene:withSettings:reason:;
- (BOOL)_isEligibleScene:;
- (void)amendSceneSettings:forScene:;
- (void)_updateScenesWithTransitionContext:reason:;
- (id)succinctDescriptionBuilder;
- (void)beginTrackingScene:;
- (unsigned long long)_deactivationReasonsForScene:withSettings:;
- (id)eligibleScenes;
- (BOOL)_isEligibleScene:withSettings:;
- (id)newAssertionWithReason:;
- (void)endTrackingScene:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_untrackScene:;
- (id)description;
- (void)addAssertion:withTransitionContext:;
- (void)_trackScene:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
