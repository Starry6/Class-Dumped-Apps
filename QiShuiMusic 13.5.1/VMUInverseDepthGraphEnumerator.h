@interface VMUInverseDepthGraphEnumerator : VMUGraphEnumerator
- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:withBlock:;
- (id)statusDisplayDescription;
- (id)initWithGraph:depthGraph:;
@end
