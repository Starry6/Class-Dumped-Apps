@interface SFUnifiedTabBarItemArrangement : NSObject
@property (nonatomic) q activeItemSquishState;
@property (nonatomic) BOOL revealsSquishedActiveItem;
@property (nonatomic) NSArray pinnedItems;
@property (nonatomic) NSArray unpinnedItems;
@property (nonatomic) Q pinnedItemLimit;
@property (nonatomic) NSArray overflowPinnedItems;
@property (nonatomic) NSIndexSet allItemIndexes;
@property (nonatomic) NSArray items;
@property (nonatomic) SFUnifiedBarItem activeItem;
@property (nonatomic) Q activeItemIndex;
@property (nonatomic) BOOL activeItemIsExpanded;
@property (nonatomic) BOOL allowsScrollingPinnedItems;
- (id)init;
- (id)activeItem;
- (id)pinnedItems;
- (BOOL)allowsScrollingPinnedItems;
- (long long)activeItemSquishState;
- (id)items;
- (id)initWithItem:activeItemIsExpanded:;
- (id)arrangementWithActiveItem:;
- (id)arrangementWithActiveItemSquishState:;
- (BOOL)activeItemIsExpanded;
- (void)determineActiveItemSquishStateIfNeeded:;
- (BOOL)revealsSquishedActiveItem;
- (id)initWithItems:activeItem:;
- (id)unpinnedItems;
- (unsigned long long)activeItemIndex;
- (unsigned long long)pinnedItemLimit;
- (void).cxx_destruct;
- (id)initWithItems:activeItem:activeItemIsExpanded:allowsScrollingPinnedItems:;
- (id)arrangementWithActiveItemIsExpanded:;
- (id)resolvedArrangementWithPinnedItemLimit:overflowItem:;
- (id)allItemIndexes;
- (id)_initWithItems:activeItem:activeItemIsExpanded:allowPinning:allowsScrollingPinnedItems:;
- (BOOL)isEqualToArrangement:;
- (id)overflowPinnedItems;
- (id)copyWithZone:;
@end
