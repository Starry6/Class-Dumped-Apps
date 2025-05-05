@interface VMUGraphEnumerator : NSObject
@property (nonatomic) VMUProcessObjectGraph graph;
- (id)graph;
- (id)initWithGraph:;
- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:withBlock:;
- (void)enumerateDestinationsOfNode:groupedBy:withBlock:;
- (void)enumerateDestinationsOfNodes:groupedBy:withBlock:;
- (void)enumerateDestinationsOfGroup:groupedBy:withBlock:;
- (id)destinationsOfNodes:;
- (id)destinationsOfGroup:;
- (id)statusDisplayDescription;
- (id)buildReversePostOrderWithRoots:;
@end
