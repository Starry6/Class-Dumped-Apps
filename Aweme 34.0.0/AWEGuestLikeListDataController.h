@interface AWEGuestLikeListDataController : AWEListDataController
@property (nonatomic) NSString nextPageToken;
@property (nonatomic) <AWEGuestLikeListDataControllerDelegate> delegate;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)fetchWithPullType:completion:;
- (id)nextPageToken;
- (void)setNextPageToken:;
- (void)delegate_loadMoreWithCompletion:error:;
- (void)delegateCallWithPullType:list:error:;
- (void)delegate_initFetchWithCompletion:error:;
- (void)delegate_refreshWithCompletion:error:;
- (id)init;
- (id)delegate;
- (void)resetData;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setDelegate:;
- (id)copyWithZone:;
@end
