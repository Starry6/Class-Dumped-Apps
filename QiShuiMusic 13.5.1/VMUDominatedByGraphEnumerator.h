@interface VMUDominatedByGraphEnumerator : VMUGraphEnumerator
- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:withBlock:;
- (id)statusDisplayDescription;
- (id)initWithGraph:dominatorGraph:;
@end
