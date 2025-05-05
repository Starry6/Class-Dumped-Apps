@interface GKRTree : NSObject
@property (nonatomic) Q queryReserve;
- (id)init;
- (void)dealloc;
- (id)initWithMaxNumberOfChildren:;
- (void)addElement:boundingRectMin:boundingRectMax:splitStrategy:;
- (void)removeElement:boundingRectMin:boundingRectMax:;
- (id)elementsInBoundingRectMin:rectMax:;
- (unsigned long long)queryReserve;
- (void)setQueryReserve:;
+ (id)treeWithMaxNumberOfChildren:;
@end
