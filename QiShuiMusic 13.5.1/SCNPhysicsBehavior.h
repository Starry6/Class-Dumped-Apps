@interface SCNPhysicsBehavior : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)bodyB;
- (id)bodyA;
- (BOOL)hasReferenceToPhysicsBody:;
+ (BOOL)supportsSecureCoding;
@end
