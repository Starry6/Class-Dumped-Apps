@interface AWEGuestFollowFeedDataController : AWEListDataController
@property (nonatomic) <AWEHttpTask> lastRequestTask;
@property (nonatomic) NSString pageToken;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)fetchWithPullType:completion:;
- (id)pageToken;
- (void)setPageToken:;
- (id)lastRequestTask;
- (void)setLastRequestTask:;
- (id)requestFollowFeedWithParams:completionBlock:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
- (BOOL)cancelCurrentRequest;
@end
