@interface AWEIMTaskCardNaviDatasource : NSObject
@property (nonatomic) AWEIMTaskPlatformContext context;
@property (nonatomic) RxCollectionViewDiffableDataSource diffiableDataSource;
- (id)__cellModelForResult:;
- (id)__createDiffableDataSource:;
- (void)setDiffiableDataSource:;
- (id)diffiableDataSource;
- (void)renderDatas:context:;
- (id)initWithCollectionView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
