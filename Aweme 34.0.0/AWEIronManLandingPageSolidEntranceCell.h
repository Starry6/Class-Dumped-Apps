@interface AWEIronManLandingPageSolidEntranceCell : UITableViewCell
@property (nonatomic) UICollectionView solidEntranceCollectionView;
@property (nonatomic) AWEIronManLandingPageSolidEntranceViewModel viewModel;
@property (nonatomic) <AWEIronManLandingPageSolidEntranceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)getCellHeight;
- (void)basicLayout;
- (void)itemDidClick:extra:;
- (void)setSolidEntranceCollectionView:;
- (id)solidEntranceCollectionView;
- (void)trackItemShowWithItemModel:event:;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)addObserver;
- (id)viewModel;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setUpUI;
@end
