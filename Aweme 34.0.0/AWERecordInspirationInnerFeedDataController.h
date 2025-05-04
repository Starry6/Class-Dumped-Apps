@interface AWERecordInspirationInnerFeedDataController : AWEListDataController
@property (nonatomic) <AWERecordInspirationDataProviderProtocol> dataProvider;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)dealWithFetchedDataList:error:completion:;
- (void)initFetchWithRefresh:completion:;
- (id)initWithDataProvider:;
- (void)setDataProvider:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)dataProvider;
@end
