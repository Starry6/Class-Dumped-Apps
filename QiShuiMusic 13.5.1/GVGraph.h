@interface GVGraph : NSObject
@property (nonatomic) NSMutableOrderedSet nodes;
@property (nonatomic) NSMutableOrderedSet edges;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (void)removeNode:;
- (id)init;
- (void)dealloc;
- (void)setNodes:;
- (void)setEdges:;
- (id)allEdges;
- (id)allNodes;
- (void)addNode:;
- (id)nodes;
- (void)addEdgeFrom:to:;
- (id)description;
- (id)edges;
- (id)bounds;
- (BOOL)render:;
- (BOOL)hasNode:;
- (id)edgeFrom:to:;
- (BOOL)hasEdgeFrom:to:;
- (void)removeEdgeFrom:to:;
- (void)addEdgeFrom:to:reversed:;
- (void)reverseEdge:;
- (void)undoReverseEdge:;
- (id)connectedSubgraphs;
- (void)iterateOverAllEdges:;
- (void)iterateOverAllNodes:;
@end
