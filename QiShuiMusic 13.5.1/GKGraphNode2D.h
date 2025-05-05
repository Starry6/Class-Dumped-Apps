@interface GKGraphNode2D : GKGraphNode
@property (nonatomic)  position;
- (void)setPosition:;
- (id)position;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithPoint:;
- (id)makeCGraphNode;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:;
- (float)costToNode:;
- (id)cGraphNode2D;
+ (BOOL)supportsSecureCoding;
+ (id)nodeWithPoint:;
@end
