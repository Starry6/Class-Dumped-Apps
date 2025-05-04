@interface AWEIMOfficialSubCategoryDetailListViewController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEIMOfficialSubCategoryDetailListDataSource dataSource;
@property (nonatomic) <AWEIMOfficialSubCategoryDetailListViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderWithData:context:;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (void)setupLayout;
@end
