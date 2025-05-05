@interface PKPhysicsContact : NSObject
@property (nonatomic) BOOL didBegin;
@property (nonatomic) BOOL didEnd;
@property (nonatomic) PKPhysicsBody bodyA;
@property (nonatomic) PKPhysicsBody bodyB;
@property (nonatomic) {CGPoint=dd} contactPoint;
@property (nonatomic) {CGVector=dd} contactNormal;
@property (nonatomic) double collisionImpulse;
- (id)init;
- (void).cxx_destruct;
- (BOOL)didEnd;
- (BOOL)didBegin;
- (id)bodyB;
- (id)bodyA;
- (id)contactPoint;
- (void)setDidEnd:;
- (void)setContactPoint:;
- (double)collisionImpulse;
- (id)contactNormal;
- (void)setBodyA:;
- (void)setBodyB:;
- (void)setDidBegin:;
- (void)setContactNormal:;
- (void)setCollisionImpulse:;
@end
