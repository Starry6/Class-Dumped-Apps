@interface BDXCategoryBaseView : UIView
@property (nonatomic) BDXCategoryCollectionView collectionView;
@property (nonatomic) {DelegateFlags=b1b1b1b1b1} delegateFlags;
@property (nonatomic) q selectedIndex;
@property (nonatomic) double innerCellSpacing;
@property (nonatomic) {CGPoint=dd} lastContentViewContentOffset;
@property (nonatomic) BDXCategoryViewAnimator animator;
@property (nonatomic) q scrollingTargetIndex;
@property (nonatomic) BOOL needReloadByBecomeActive;
@property (nonatomic) BOOL firstLayoutSubviews;
@property (nonatomic) BOOL needConfigAutomaticallyAdjustsScrollViewInsets;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) <BDXCategoryViewDelegate> delegate;
@property (nonatomic) <BDXCategoryViewListContainer> listContainer;
@property (nonatomic) UIScrollView contentScrollView;
@property (nonatomic) q defaultSelectedIndex;
@property (nonatomic) BOOL contentScrollViewClickTransitionAnimationEnabled;
@property (nonatomic) double contentEdgeInsetLeft;
@property (nonatomic) double contentEdgeInsetRight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellWidthIncrement;
@property (nonatomic) double cellSpacing;
@property (nonatomic) Q layoutGravity;
@property (nonatomic) BOOL cellWidthZoomEnabled;
@property (nonatomic) BOOL cellWidthZoomScrollGradientEnabled;
@property (nonatomic) BDXCategoryIndicatorViewBorderConfig bottomBorderConfig;
@property (nonatomic) double cellWidthZoomScale;
@property (nonatomic) BOOL selectedAnimationEnabled;
@property (nonatomic) double selectedAnimationDuration;
@property (nonatomic) BOOL forceObserveContentOffset;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)selectCellAtIndex:selectedType:;
- (id)bottomBorderConfig;
- (double)cellWidthIncrement;
- (double)cellWidthZoomScale;
- (void)clickSelectItemAtIndex:;
- (void)configAutomaticallyAdjustsScrollViewInsets:;
- (double)contentEdgeInsetLeft;
- (double)contentEdgeInsetRight;
- (void)contentOffsetOfContentScrollViewDidChanged:;
- (BOOL)forceObserveContentOffset;
- (double)getCellWidthAtIndex:;
- (double)getContentEdgeInsetLeft;
- (double)getContentEdgeInsetRight;
- (id)getTargetCellFrame:;
- (id)getTargetSelectedCellFrame:selectedType:;
- (void)handelTap:;
- (void)initializeData;
- (double)innerCellSpacing;
- (BOOL)isCellWidthZoomEnabled;
- (BOOL)isCellWidthZoomScrollGradientEnabled;
- (BOOL)isContentScrollViewClickTransitionAnimationEnabled;
- (BOOL)isFirstLayoutSubviews;
- (BOOL)isNeedConfigAutomaticallyAdjustsScrollViewInsets;
- (BOOL)isNeedReloadByBecomeActive;
- (BOOL)isSelectedAnimationEnabled;
- (id)lastContentViewContentOffset;
- (unsigned long long)layoutGravity;
- (id)listContainer;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:;
- (void)refreshCellModel:index:;
- (void)refreshDataSource;
- (void)refreshSelectedCellModel:unselectedCellModel:;
- (void)reloadCellAtIndex:;
- (void)reloadDataWithoutListContainer;
- (void)scrollSelectItemAtIndex:;
- (long long)scrollingTargetIndex;
- (double)selectedAnimationDuration;
- (void)setBottomBorderConfig:;
- (void)setCellWidthIncrement:;
- (void)setCellWidthZoomEnabled:;
- (void)setCellWidthZoomScale:;
- (void)setCellWidthZoomScrollGradientEnabled:;
- (void)setContentEdgeInsetLeft:;
- (void)setContentEdgeInsetRight:;
- (void)setContentScrollViewClickTransitionAnimationEnabled:;
- (void)setDefaultSelectedIndex:;
- (void)setFirstLayoutSubviews:;
- (void)setForceObserveContentOffset:;
- (void)setInnerCellSpacing:;
- (void)setLastContentViewContentOffset:;
- (void)setLayoutGravity:;
- (void)setListContainer:;
- (void)setNeedConfigAutomaticallyAdjustsScrollViewInsets:;
- (void)setNeedReloadByBecomeActive:;
- (void)setScrollingTargetIndex:;
- (void)setSelectedAnimationDuration:;
- (void)setSelectedAnimationEnabled:;
- (id)animator;
- (void)reloadData;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)setDataSource:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)dealloc;
- (void)layoutSubviews;
- (long long)collectionView:numberOfItemsInSection:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (long long)selectedIndex;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setAnimator:;
- (id)initWithCoder:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)applicationDidBecomeActive:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)refreshState;
- (void)setCollectionView:;
- (id)dataSource;
- (id)delegate;
- (id)contentScrollView;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (void)willMoveToSuperview:;
- (id)collectionView;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (BOOL)isRTL;
- (void)setSelectedIndex:;
- (void)setIsRTL:;
- (double)cellWidth;
- (long long)defaultSelectedIndex;
- (void)setContentScrollView:;
- (double)cellSpacing;
- (void)initializeViews;
- (void)setCellSpacing:;
- (void)setCellWidth:;
- (id)delegateFlags;
- (void)setDelegateFlags:;
- (void)selectItemAtIndex:;
@end
