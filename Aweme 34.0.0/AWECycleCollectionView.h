@interface AWECycleCollectionView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWECycleCollectionViewLayout layout;
@property (nonatomic) CADisplayLink autoScrollDisplayLink;
@property (nonatomic) # cellClass;
@property (nonatomic) # headerClass;
@property (nonatomic) BOOL needCycleScroll;
@property (nonatomic) <AWECycleCollectionViewDataSource> dataSource;
@property (nonatomic) <AWECycleCollectionViewDelegate> delegate;
@property (nonatomic) BOOL enableCycleScroll;
@property (nonatomic) BOOL enableAutoScrollIfNeeded;
@property (nonatomic) Q autoScrollDirection;
@property (nonatomic) double autoScrollDelayDuration;
@property (nonatomic) double autoScrollSpeed;
@property (nonatomic) BOOL stopAutoScrollWhenDragging;
@property (nonatomic) BOOL scrollCellToCenterAfterSelected;
@property (nonatomic) BOOL enableLeftBarrier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopAutoScroll;
- (void)startAutoScroll;
- (void)handleDisplayLink;
- (Class)headerClass;
- (void)registerCellClass:;
- (void)p_setupPropertiesDefault;
- (void)p_setupCycleCollectionView;
- (void)setHeaderClass:;
- (id)autoScrollDisplayLink;
- (void)p_updateIfNeedCycleScroll;
- (BOOL)needCycleScroll;
- (BOOL)enableCycleScroll;
- (unsigned long long)mapOuterSectionToInnerSection:;
- (unsigned long long)mapInnerSectionToOuterSection:;
- (void)setNeedCycleScroll:;
- (void)p_autoScrollIfNeeded;
- (double)autoScrollDelayDuration;
- (BOOL)enableAutoScrollIfNeeded;
- (BOOL)shouldCycleScroll;
- (id)mapInnerIndexPathToOuterIndexPath:;
- (BOOL)scrollCellToCenterAfterSelected;
- (BOOL)enableLeftBarrier;
- (BOOL)stopAutoScrollWhenDragging;
- (double)autoScrollSpeed;
- (void)registerHeaderClass:;
- (id)mapOuterIndexPathToInnerIndexPath:;
- (void)setAutoScrollSpeed:;
- (void)setEnableCycleScroll:;
- (void)setEnableAutoScrollIfNeeded:;
- (unsigned long long)autoScrollDirection;
- (void)setAutoScrollDirection:;
- (void)setAutoScrollDelayDuration:;
- (void)setStopAutoScrollWhenDragging:;
- (void)setScrollCellToCenterAfterSelected:;
- (void)setEnableLeftBarrier:;
- (void)setAutoScrollDisplayLink:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)initWithLayout:;
- (id)collectionView;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (void)dealloc;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)delegate;
- (void)setLayout:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)layout;
- (long long)numberOfSectionsInCollectionView:;
- (void)reload;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (Class)cellClass;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)dataSource;
- (id)initWithLayoutType:;
- (void)setCellClass:;
@end
