@interface AWEMemoriesPlayerFocusLayout : UICollectionViewLayout
@property (nonatomic) NSMutableArray cache;
@property (nonatomic) {CGSize=dd} normalCellSize;
@property (nonatomic) {CGSize=dd} centerCellSize;
@property (nonatomic) double normalMargin;
@property (nonatomic) double centerMargin;
@property (nonatomic) double contentWidth;
@property (nonatomic) BOOL enablePaging;
@property (nonatomic) double resistance;
@property (nonatomic) double bandWidth;
@property (nonatomic) <AWEMemoriesPlayerFocusLayoutDelegate> delegate;
@property (nonatomic) Q homeIndex;
- (double)bandWidth;
- (void)setBandWidth:;
- (BOOL)needUpdateLayout;
- (void)setNormalCellSize:;
- (void)setNormalMargin:;
- (void)setCenterMargin:;
- (void)setEnablePaging:;
- (id)arrayOfLayoutAttributesStartFromIndex:count:;
- (void)updateLayoutForBounds:;
- (id)normalCellSize;
- (double)normalMargin;
- (BOOL)enablePaging;
- (double)distanceToPoint:fromCenter:;
- (id)sizeAtPoint:withCenter:;
- (double)centerMargin;
- (double)integralOfFunctionWithHighValue:lowValue:bandWidth:fromPoint:toPoint:;
- (double)valueOfFunctionWithHighValue:lowValue:bandWidth:atPoint:;
- (double)currentCenterPosition;
- (long long)indexOfCurrentCenteredItem;
- (double)contentOffsetForCenteredItemAtIndex:;
- (void)setCache:;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)cache;
- (id)init;
- (id)delegate;
- (double)itemWidth;
- (void)setContentWidth:;
- (id)collectionViewContentSize;
- (double)contentWidth;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)resistance;
- (void)setResistance:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
- (unsigned long long)homeIndex;
- (void)setHomeIndex:;
- (id)centerCellSize;
- (void)setCenterCellSize:;
@end
