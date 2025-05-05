@interface GKObstacleGraph : GKGraph
@property (nonatomic) NSArray obstacles;
@property (nonatomic) float bufferRadius;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (Class)nodeClass;
- (id)makeCGraph;
- (id)obstacles;
- (float)bufferRadius;
- (void)addObstacles:;
- (void)removeObstacles:;
- (void)connectNodeUsingObstacles:;
- (Class)classForGenericArgumentAtIndex:;
- (id)cObstacleGraph;
- (id)mutObstacles;
- (id)initWithObstacles:bufferRadius:;
- (id)initWithObstacles:bufferRadius:nodeClass:;
- (void)connectNodeUsingObstacles:ignoringObstacles:;
- (void)connectNodeUsingObstacles:ignoringBufferRadiusOfObstacles:;
- (void)removeAllObstacles;
- (id)nodesForObstacle:;
- (void)lockConnectionFromNode:toNode:;
- (void)unlockConnectionFromNode:toNode:;
- (BOOL)isConnectionLockedFromNode:toNode:;
+ (BOOL)supportsSecureCoding;
+ (id)graphWithObstacles:bufferRadius:;
+ (id)graphWithObstacles:bufferRadius:nodeClass:;
@end
