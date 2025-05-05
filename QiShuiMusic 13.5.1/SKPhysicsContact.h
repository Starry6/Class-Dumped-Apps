@interface SKPhysicsContact : NSObject
@property (nonatomic) SKPhysicsBody bodyA;
@property (nonatomic) SKPhysicsBody bodyB;
@property (nonatomic) {CGPoint=dd} contactPoint;
@property (nonatomic) {CGVector=dd} contactNormal;
@property (nonatomic) double collisionImpulse;
- (void).cxx_destruct;
- (id)bodyB;
- (id)bodyA;
- (id)contactPoint;
- (double)collisionImpulse;
- (id)contactNormal;
+ (id)allocWithZone:;
@end
