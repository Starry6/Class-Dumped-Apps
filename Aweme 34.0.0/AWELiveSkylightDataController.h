@interface AWELiveSkylightDataController : AWEListDataController
@property (nonatomic) NSString originUrl;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString pageUrl;
@property (nonatomic) q followSessionId;
@property (nonatomic) NSMutableSet displayedRoomIds;
@property (nonatomic) BOOL isRequestMore;
@property (nonatomic) q totalLiveCount;
@property (nonatomic) <AWELiveModuleService> liveModuleService;
@property (nonatomic) BOOL isFeedLoadMore;
@property (nonatomic) BOOL liveSpecialFollowShown;
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) NSMutableArray liveList;
@property (nonatomic) NSString callBackHeader;
- (id)originUrl;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setOriginUrl:;
- (id)liveList;
- (void)setLiveList:;
- (id)liveModuleService;
- (id)initWithLiveModuleService:;
- (void)handleRefreshCompletionData:;
- (void)loadMore:completion:;
- (void)refreshAllPageWithCompletion:needHandleData:isReticentRefresh:;
- (void)refreshWithCompletion:needHandleData:;
- (void)refreshWithCompletion:needHandleData:isReticentRefresh:;
- (BOOL)removeDataSourceWithUserID:;
- (void)loadNextPageWithCompletion:;
- (long long)totalLiveCount;
- (void)setCallBackHeader:;
- (void)updateDisplayedRoomId:;
- (void)setLiveModuleService:;
- (void)reloadWithPullType:completion:;
- (id)displayedRoomIds;
- (id)appendUrl:andProcessDisplayRoomIds:;
- (void)reloadWithPullType:completion:needHandleData:;
- (BOOL)isFeedLoadMore;
- (void)setIsFeedLoadMore:;
- (id)callBackHeader;
- (void)setTotalLiveCount:;
- (id)getCommonRequestParamsWithSessionId:isReticentRefresh:;
- (BOOL)liveSpecialFollowShown;
- (void)setLiveSpecialFollowShown:;
- (long long)followSessionId;
- (void)setFollowSessionId:;
- (BOOL)enableLoadNextPage;
- (void)setIsRequestMore:;
- (void)handleLoadMoreCompletionData:;
- (BOOL)isRequestMore;
- (void)setDisplayedRoomIds:;
- (id)init;
- (id)pageUrl;
- (id)URL;
- (void)setURL:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setPageUrl:;
- (void)setDataSource:;
- (id)dataSource;
@end
