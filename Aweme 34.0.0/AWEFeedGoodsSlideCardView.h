@interface AWEFeedGoodsSlideCardView : UIView
@property (nonatomic) Q style;
@property (nonatomic) UICollectionView slideCollectionView;
@property (nonatomic) NSArray goodsDataArray;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) Q startIndex;
@property (nonatomic) BOOL isFirstCallWillDisplayCell;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <AWEGoodsSlideCardViewDelegate> delegate;
@property (nonatomic) q currentPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeButtonDidClick;
- (void)p_loadView;
- (void)setIsFirstCallWillDisplayCell:;
- (void)setGoodsDataArray:;
- (id)goodsDataArray;
- (id)slideCollectionView;
- (BOOL)isFirstCallWillDisplayCell;
- (void)trackShowWithIndex:;
- (void)remakeConstraintsForStyle;
- (void)updateCloseButtonStyle;
- (void)updateWithDataSource:targetPromotionID:;
- (void)setSlideCollectionView:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)delegate;
- (void)updateStyle:;
- (id)collectionView:cellForItemAtIndexPath:;
- (unsigned long long)startIndex;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (long long)currentPage;
- (unsigned long long)style;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setStartIndex:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)setStyle:;
- (double)lastContentOffset;
- (void)setLastContentOffset:;
- (id)cellIdentifier;
- (void)setCloseButton:;
- (id)closeButton;
- (id)cardSize;
@end
