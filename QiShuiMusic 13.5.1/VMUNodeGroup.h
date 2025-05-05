@interface VMUNodeGroup : NSObject
@property (nonatomic) NSString name;
- (void)dealloc;
- (void)enumerateNodesWithBlock:;
- (void)addNode:;
- (id)nodes;
- (void).cxx_destruct;
- (id)name;
- (long long)count;
- (id)initWithName:graph:;
- (void)_createGroup;
@end
