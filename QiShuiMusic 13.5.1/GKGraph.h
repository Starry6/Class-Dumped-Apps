@interface GKGraph : NSObject
@property (nonatomic) NSMutableDictionary _info;
@property (nonatomic) NSArray nodes;
- (id)init;
- (void)dealloc;
- (id)copy;
- (void)removeNodes:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)nodes;
- (void).cxx_destruct;
- (id)_info;
- (id)copyWithZone:;
- (void)set_info:;
- (id)initWithNodes:;
- (void)addNodes:;
- (id)makeCGraph;
- (id)cGraph;
- (id)nodesMut;
- (void)connectNodeToLowestCostNode:bidirectional:;
- (id)findPathFromNode:toNode:;
+ (id)graph;
+ (BOOL)supportsSecureCoding;
+ (id)graphWithNodes:;
@end
