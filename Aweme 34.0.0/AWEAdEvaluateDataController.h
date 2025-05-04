@interface AWEAdEvaluateDataController : AWEListDataController
@property (nonatomic) q currentPage;
@property (nonatomic) NSNumber componentID;
@property (nonatomic) q totalCount;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)requestNextPageWithCompletion:;
- (id)handleModelDataWithList:;
- (void)requestDiggCountUpdate:WithActionType:;
- (long long)totalCount;
- (long long)currentPage;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)reset;
- (void)setComponentID:;
- (id)componentID;
- (void)setTotalCount:;
+ (void)fetchFeedCommentListWithParameters:completion:;
@end
