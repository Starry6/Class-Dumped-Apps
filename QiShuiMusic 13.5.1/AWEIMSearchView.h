@interface AWEIMSearchView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray shareModelArray;
@property (nonatomic) UIView lineView;
@property (nonatomic) <AWEIMSearchViewDelegate> delegate;
@property (nonatomic) AWEIMSearchBar searchBar;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareModelArray;
- (void)p_updateSearchBarUI;
- (void)setShareModelArray:;
- (void)updateShareModelArray:reloadDirectly:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)layoutSubviews;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (void)setType:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setSearchBar:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (id)searchBar;
- (void)setCollectionView:;
- (unsigned long long)type;
- (id)delegate;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (id)lineView;
- (void)setLineView:;
@end
