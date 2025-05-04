@interface AWEAwemeDetailVideoDiaryDataController : AWEListDataController
@property (nonatomic) NSString URLString;
@property (nonatomic) NSArray itemIDArray;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL intial;
@property (nonatomic) BOOL invalidURL;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)fetchDataWithCompletion:isLoadmore:;
- (id)itemIDArray;
- (void)setItemIDArray:;
- (id)initWithURL:minCursor:maxCursor:itemIDArray:;
- (BOOL)isInvalidURL;
- (BOOL)isIntial;
- (void)setIntial:;
- (void)setInvalidURL:;
- (id)URLString;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setURLString:;
@end
