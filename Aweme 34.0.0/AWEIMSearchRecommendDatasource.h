@interface AWEIMSearchRecommendDatasource : NSObject
@property (nonatomic) RxCollectionViewDiffableDataSource diffableDataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellItemForResult:;
- (void)updateResult:isCache:;
- (void)updateData:isCache:;
- (id)cellItemForResult:withRequestResult:;
- (id)cellModelForResult:;
- (void)fetchRecommendData;
- (id)diffableDataSource;
- (void)setDiffableDataSource:;
- (void).cxx_destruct;
@end
