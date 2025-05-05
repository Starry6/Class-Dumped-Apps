@interface GKGridGraphNode : GKGraphNode
@property (nonatomic)  gridPosition;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)gridPosition;
- (id)makeCGraphNode;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:;
- (float)costToNode:;
- (id)cGridGraphNode;
- (id)initWithGridPosition:;
+ (BOOL)supportsSecureCoding;
+ (id)nodeWithGridPosition:;
@end
