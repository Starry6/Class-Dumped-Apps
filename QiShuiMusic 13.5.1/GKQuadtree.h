@interface GKQuadtree : NSObject
- (BOOL)removeElement:;
- (id)init;
- (void)dealloc;
- (id)elementsInQuad:;
- (id)addElement:withPoint:;
- (id)initWithBoundingQuad:minimumCellSize:;
- (id)addElement:withQuad:;
- (id)elementsAtPoint:;
- (BOOL)removeElement:withNode:;
+ (id)quadtreeWithBoundingQuad:minimumCellSize:;
@end
