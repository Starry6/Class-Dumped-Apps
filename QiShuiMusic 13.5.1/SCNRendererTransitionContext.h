@interface SCNRendererTransitionContext : NSObject
@property (nonatomic) SCNScene outgoingScene;
@property (nonatomic) SKTransition transition;
@property (nonatomic) double transitionStartTime;
@property (nonatomic) SCNNode outgoingPointOfView;
- (void)setTransition:;
- (id)transition;
- (void)dealloc;
- (id)copyWithZone:;
- (id)transitionPass;
- (id)prepareRendererAtIndex:withScene:renderSize:pointOfView:parentRenderer:;
- (id)outgoingScene;
- (void)setOutgoingScene:;
- (double)transitionStartTime;
- (void)setTransitionStartTime:;
- (id)outgoingPointOfView;
- (void)setOutgoingPointOfView:;
@end
