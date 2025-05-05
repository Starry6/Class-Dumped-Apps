@interface BLSBacklightFBSSceneEnvironmentActionHandler : NSObject
- (id)respondToActions:forFBSScene:fromTransitionContext:;
+ (id)frameSpecifiersRequestFromAction:;
+ (id)desiredFidelityRequestFromAction:;
@end
