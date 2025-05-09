@interface AWEDetailTrendMusicListSectionController : IGListSectionController
@property (nonatomic) <AWEDetailTrendMusicListConfiguration> contentConfiguration;
@property (nonatomic) AWEDetailTrendMusicListContainerView containerView;
@property (nonatomic) UICollectionView contentCollectionView;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) <AWEDetailMusicListViewModelProtocol> musicListViewModel;
@property (nonatomic) AWEDetailTrendViewModel trendViewModel;
@property (nonatomic) <AWEDetailMusicListPlayService> musicListPlayService;
@property (nonatomic) <AWEDetailTrendTrackerService> trendTrackerService;
@property (nonatomic) BOOL isFromSkeleton;
@property (nonatomic) BOOL everHorizontalScroll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (void)bindViewModel;
- (id)contentCollectionView;
- (void)setContentCollectionView:;
- (void)didTapCoverImageWithCell:sender:;
- (void)didTapPlayImageWithCell:sender:;
- (void)didTapMusicTitleWithCell:sender:;
- (void)didTapMusicAuthorInfoWithCell:sender:;
- (void)didTapMusicInfoAreaViewWithCell:sender:;
- (void)didTapLunaUGButtonWithCell:sender:;
- (void)didTapCollectMusicButtonWithCell:sender:;
- (void)didTapLunaAppendPlaylistButtonWithCell:sender:;
- (void)setTrendTrackerService:;
- (void)setTrendViewModel:;
- (id)trendViewModel;
- (id)trendTrackerService;
- (void)setMusicListViewModel:;
- (void)setMusicListPlayService:;
- (BOOL)isFromSkeleton;
- (void)setIsFromSkeleton:;
- (id)musicListViewModel;
- (id)musicListPlayService;
- (void)trackMusicListViewDidAppearIfNeeded;
- (BOOL)everHorizontalScroll;
- (void)setEverHorizontalScroll:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (void)setProvider:;
- (long long)numberOfItems;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)containerView;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)scrollViewWillBeginDragging:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)provider;
- (id)initWithServiceProvider:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (id)contentConfiguration;
- (id)inset;
- (void)setContentConfiguration:;
- (id)sizeForItemAtIndex:;
@end
