@interface AWEIMTaskPlatformContentDataSource : NSObject
@property (nonatomic) AWEIMTaskPlatformContext context;
@property (nonatomic) RxCollectionViewDiffableDataSource diffiableDataSource;
@property (nonatomic) UICollectionView collectionView;
- (id)__cellModelForResult:;
- (id)__createDiffableDataSource:;
- (void)setDiffiableDataSource:;
- (id)diffiableDataSource;
- (void)renderDatas:context:;
- (id)collectionView;
- (id)initWithCollectionView:;
- (void)setCollectionView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
