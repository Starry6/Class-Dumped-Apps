@interface AWEIMFollowRequestListDataController : IESIMListDataController
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q maxTime;
@property (nonatomic) q total;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithCompletion:;
- (unsigned long long)maxTime;
- (id)init;
- (void)setMaxTime:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)refreshWithCompletion:;
- (long long)total;
- (void)setTotal:;
@end
