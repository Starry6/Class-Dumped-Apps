@interface BWDepthFirstEnumerator : BWNodeEnumerator
- (id)nextObject;
- (void)dealloc;
- (id)initWithGraph:vertexOrdering:;
@end
