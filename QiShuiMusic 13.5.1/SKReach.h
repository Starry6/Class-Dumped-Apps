@interface SKReach : SKAction
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)willStartWithTarget:atTime:;
- (void)updateWithTarget:forTime:;
- (void)solveIKWithTarget:;
+ (id)reachTo:rootNode:duration:;
+ (id)reachTo:rootNode:velocity:;
+ (id)reachTo:rootNode:zRotationSpeed:maxDuration:;
+ (id)reachTo:rootNode:duration:maxZRotationSpeed:;
@end
