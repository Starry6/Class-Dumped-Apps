@interface AWEProfilePreviewExtensionView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deleteItemAtIndexPath:;
- (void)refreshExtensionHeight;
- (double)extensionHeight;
- (void)scrollToRatio:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (id)dataSource;
- (void)insertItem:atIndexPath:;
- (void)moveItemAtIndexPath:toIndexPath:;
- (void)setupUI;
- (void)reloadData:;
@end
