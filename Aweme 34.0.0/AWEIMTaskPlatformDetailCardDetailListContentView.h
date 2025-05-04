@interface AWEIMTaskPlatformDetailCardDetailListContentView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIMTaskDetailistContext context;
@property (nonatomic) RxCollectionViewDiffableDataSource diffiableDataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (id)__cellModelForResult:;
- (id)__createCollectionView:cellClass:frame:;
- (id)__createDiffableDataSource:;
- (void)setDiffiableDataSource:;
- (id)diffiableDataSource;
- (id)collectionView;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
