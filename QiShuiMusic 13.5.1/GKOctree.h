@interface GKOctree : NSObject
- (BOOL)removeElement:;
- (id)init;
- (void)dealloc;
- (id)addElement:withPoint:;
- (id)elementsAtPoint:;
- (BOOL)removeElement:withNode:;
- (id)initWithBoundingBox:minimumCellSize:;
- (id)addElement:withBox:;
- (id)elementsInBox:;
+ (id)octreeWithBoundingBox:minimumCellSize:;
@end
