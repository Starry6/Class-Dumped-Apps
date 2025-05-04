@interface AWELiveVisibleScopeSearchView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray userArray;
@property (nonatomic) <AWELiveVisibleScopeSearchViewDelegate> delegate;
@property (nonatomic) AWELiveVisibleScopeSearchBar searchBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userArray;
- (void)setUserArray:;
- (void)updateSelectedDataSource:reloadDirectly:;
- (void)p_updateSearchBarUI;
- (id)collectionView;
- (id)searchBar;
- (id)delegate;
- (void)setSearchBar:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)layoutSubviews;
@end
