@interface AWEPadWatchHistoryInnerFeedDataController : AWEListDataController
@property (nonatomic) NSMutableSet deduplicationSet;
@property (nonatomic) NSNumber maxCursor;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (id)initWithAwemeModels:;
- (id)appendAwemeModels:;
- (void)fetchHistoryDataWithMaxCursor:count:completion:;
- (id)deduplicationSet;
- (void)setDeduplicationSet:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
