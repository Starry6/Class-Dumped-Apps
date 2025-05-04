@interface AWELiveAcqCastLiveStreamDataController : AWEListDataController
@property (nonatomic) NSNumber roomID;
@property (nonatomic) q scene;
@property (nonatomic) NSMutableDictionary modelEventInfo;
@property (nonatomic) <AFDPlayRemoteAwemeModelProcessorProtocol> modelProcess;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (BOOL)canLoadMore;
- (id)initWithRoomID:scene:;
- (id)eventInfoForModel:;
- (id)modelEventInfo;
- (void)__fetchAwemeWithPullType:completion:;
- (id)__loadmoreDataSourceWithArray:;
- (id)roomID;
- (long long)scene;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)modelProcess;
@end
