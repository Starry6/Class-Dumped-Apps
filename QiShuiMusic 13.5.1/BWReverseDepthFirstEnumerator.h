@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator
- (id)nextObject;
- (void)dealloc;
- (id)initWithGraph:vertexOrdering:;
@end
