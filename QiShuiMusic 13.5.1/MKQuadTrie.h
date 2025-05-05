@interface MKQuadTrie : NSObject
- (id)allItems;
- (void)dealloc;
- (void)foreach:;
- (id)itemDescriptions;
- (id)depthFirstDescription;
- (BOOL)remove:;
- (void)clearAllItemsPerforming:;
- (id)initWithInitialRegion:minimumSize:maximumItems:;
- (id)_itemsInMapRect:;
- (id)itemsPassingRectTest:coordinateTest:;
- (id)description;
- (id)breadthFirstDescription;
- (void)insert:;
- (unsigned long long)count;
- (BOOL)contains:;
- (id)itemsInMapRect:;
@end
