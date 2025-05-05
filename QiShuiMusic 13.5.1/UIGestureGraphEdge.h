@interface UIGestureGraphEdge : UIGestureGraphElement
@property (nonatomic) UIGestureGraphNode sourceNode;
@property (nonatomic) UIGestureGraphNode targetNode;
@property (nonatomic) BOOL directed;
@property (nonatomic) BOOL loop;
- (id)initWithLabel:sourceNode:targetNode:directed:;
- (id)oppositeNode:;
- (BOOL)isDirected;
- (id)targetNode;
- (id)sourceNode;
- (void).cxx_destruct;
- (BOOL)isLoop;
- (id)description;
- (id)commonNode:;
@end
