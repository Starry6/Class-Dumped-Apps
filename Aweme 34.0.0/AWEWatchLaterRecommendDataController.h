@interface AWEWatchLaterRecommendDataController : AWEListDataController
@property (nonatomic) q recommendDataType;
@property (nonatomic) NSArray watchLaterDataSource;
- (id)requestParam;
- (id)urlStringWithRequestParams:;
- (void)setWatchLaterDataSource:;
- (long long)recommendDataType;
- (void)loadMoreWithMVChannelCompletion:;
- (void)loadMoreWithRecommendCompletion:;
- (id)filterWatchLaterDataWithArray:;
- (id)watchLaterDataSource;
- (void)loadMoreWithWatchLaterArray:completion:;
- (void)setRecommendDataType:;
- (id)requestURL;
- (void).cxx_destruct;
@end
