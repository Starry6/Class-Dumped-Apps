@interface AWEPadInterestTagDataListController : AWEListDataController
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSMutableSet deduplicationSet;
@property (nonatomic) q tagID;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)appendAwemeModels:;
- (id)deduplicationSet;
- (void)setDeduplicationSet:;
- (void)fetchFavoriteDataWithMaxCursor:minCursor:count:completion:;
- (long long)tagID;
- (id)initWithTagID:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setTagID:;
@end
