@interface GKGraphNode : NSObject
@property (nonatomic) NSArray connectedNodes;
- (id)init;
- (void)dealloc;
- (void)removeConnection:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)cGraphNode;
- (id)makeCGraphNode;
- (void)deleteCGraphNode;
- (id)connectedNodes;
- (id)mutConnectedNodes;
- (void)addConnection:bidirectional:;
- (void)addConnectionsToNodes:bidirectional:;
- (void)removeConnectionsToNodes:bidirectional:;
- (float)estimatedCostToNode:;
- (float)costToNode:;
- (id)findPathToNode:;
- (id)findPathFromNode:;
+ (id)node;
+ (BOOL)supportsSecureCoding;
@end
