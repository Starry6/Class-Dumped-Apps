@interface RxRTree : NSObject
- (id)__frameForIndex:;
- (id)indexesForFramesIntersectingFrame:;
- (id)init;
- (void).cxx_destruct;
- (id)visualDescription;
- (id).cxx_construct;
- (void)insertFrame:forIndex:;
- (void)enumerateFramesWithBlock:;
- (id)allIndexes;
- (id)boundingFrame;
@end
