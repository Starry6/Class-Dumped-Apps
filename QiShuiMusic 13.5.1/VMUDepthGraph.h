@interface VMUDepthGraph : NSObject
- (void)dealloc;
- (id)initWithGraph:;
- (void).cxx_destruct;
- (unsigned int)depthOfNode:;
- (long long)markNodes:atDepth:;
- (void)_processNodes:withDepth:;
- (void)_buildNextDepth:into:depth:;
- (void)_buildDepthMap;
@end
