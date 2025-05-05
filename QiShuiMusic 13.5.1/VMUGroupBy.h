@interface VMUGroupBy : NSObject
@property (nonatomic) VMUProcessObjectGraph graph;
- (id)graph;
- (id)initWithGraph:;
- (void).cxx_destruct;
- (id)typeNameForNode:;
- (void)enumerateGroups:withBlock:;
@end
