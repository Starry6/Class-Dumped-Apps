@interface AVCustomStackLayout : NSObject
@property (nonatomic) NSArray rowHeads;
@property (nonatomic) NSMutableArray rowSpacing;
@property (nonatomic) NSString debugIdentifier;
- (void)setRowSpacing:afterRow:;
- (id)init;
- (id)debugIdentifier;
- (id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:endingWithItem:withAvailableSize:;
- (double)_heightForRow:startingFrom:inBoundingSize:;
- (id)_lastVisibleLayoutItemAttributesFrom:;
- (id)prioritizedSizeThatFitsSize:;
- (double)layoutHeightThatFitsRowsStartingWithRow:;
- (id)rowHeads;
- (void)setDebugIdentifier:;
- (id)rowSpacing;
- (void)setRowHeads:;
- (void)setRowSpacing:;
- (void).cxx_destruct;
- (id)itemsThatFitSize:;
- (id)initWithLayoutRowHeads:;
- (id)layoutFramesInBoundingSize:;
@end
