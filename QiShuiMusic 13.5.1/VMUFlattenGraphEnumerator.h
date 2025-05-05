@interface VMUFlattenGraphEnumerator : VMUGraphEnumerator
- (void)dealloc;
- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:withBlock:;
- (id)statusDisplayDescription;
- (id)initWithGraph:graphEnumerator:;
@end
