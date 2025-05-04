@interface AWEUserBlockListDataController : AWEListDataController
@property (nonatomic) q listType;
@property (nonatomic) q lastCursor;
@property (nonatomic) BOOL hasMore;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)updateLocalDataCenterWithBlockList:;
- (void)setLastCursor:;
- (long long)lastCursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)refreshWithCompletion:;
- (long long)listType;
- (void)setListType:;
- (id)initWithListType:;
@end
