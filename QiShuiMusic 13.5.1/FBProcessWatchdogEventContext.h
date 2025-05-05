@interface FBProcessWatchdogEventContext : NSObject
@property (nonatomic) q event;
@property (nonatomic) FBSceneUpdateContext sceneUpdateContext;
@property (nonatomic) FBSSceneSettings sceneSettings;
@property (nonatomic) FBSSceneTransitionContext sceneTransitionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sceneSettings;
- (long long)event;
- (id)sceneTransitionContext;
- (id)succinctDescriptionBuilder;
- (id)sceneUpdateContext;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (id)contextForEvent:settings:transitionContext:;
@end
