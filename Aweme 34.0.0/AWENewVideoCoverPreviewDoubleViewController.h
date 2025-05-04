@interface AWENewVideoCoverPreviewDoubleViewController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEAwemeModel publishModel;
@property (nonatomic) NSArray postList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)collectionView:layout:heightForHeaderInSection:;
- (id)publishModel;
- (double)collectionView:layout:minimumColumnSpacingForSectionAtIndex:;
- (void)setPublishModel:;
- (id)initWithPublishModel:;
- (void)setPostList:;
- (id)postList;
- (double)labelHeightWithModel:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setupUI;
@end
