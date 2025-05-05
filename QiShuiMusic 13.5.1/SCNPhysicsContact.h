@interface SCNPhysicsContact : NSObject
@property (nonatomic) SCNNode nodeA;
@property (nonatomic) SCNNode nodeB;
@property (nonatomic) {SCNVector3=fff} contactPoint;
@property (nonatomic) {SCNVector3=fff} contactNormal;
@property (nonatomic) double collisionImpulse;
@property (nonatomic) double penetrationDistance;
@property (nonatomic) double sweepTestFraction;
- (void)dealloc;
- (id)description;
- (id)contactPoint;
- (id)nodeB;
- (id)nodeA;
- (double)collisionImpulse;
- (id)contactNormal;
- (void)_fillNodeA:nodeB:contactPoint:collisionImpulse:distance:hitFraction:;
- (void)_fillNodeA:nodeB:;
- (void)_updateWithManifold:index:point:;
- (double)penetrationDistance;
- (double)sweepTestFraction;
- (void)_prepareUpdate;
- (BOOL)_shouldPostUpdate;
+ (id)_contactWithManifold:index:;
@end
