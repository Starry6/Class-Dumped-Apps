@interface AWETeenLandscapeAlbumPanelSlidingTabView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout collectionViewLayout;
@property (nonatomic) NSArray tabTitles;
@property (nonatomic) NSArray tabCursors;
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) UIFont tabTitleFont;
@property (nonatomic) @? onTabClickedBlock;
@property (nonatomic) @? trackTabClickedBlock;
@property (nonatomic) q itemsCountPerTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabTitles;
- (void)p_setupViews;
- (void)p_layoutViews;
- (void)setTabTitles:;
- (void)updateSelectedTabToCurrentEpisode:;
- (id)initWithTotalEpisodesCount:andItemsCountPerTab:;
- (void)setOnTabClickedBlock:;
- (void)p_setupTabTitlesWithTotalEpisodesCount:;
- (BOOL)p_isShowing;
- (id)tabCursors;
- (id)trackTabClickedBlock;
- (long long)itemsCountPerTab;
- (void)setTabCursors:;
- (id)onTabClickedBlock;
- (void)setTrackTabClickedBlock:;
- (void)setItemsCountPerTab:;
- (void)setTabTitleFont:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void)dismiss;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)selectedIndexPath;
- (void)setCollectionViewLayout:;
- (void)setSelectedIndexPath:;
- (id)tabTitleFont;
@end
