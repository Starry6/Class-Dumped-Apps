@interface AWELiveAcqCastSearchLiveStreamDataController : AWEListDataController
@property (nonatomic) NSNumber offset;
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) q hotSpotCount;
@property (nonatomic) q refreshCount;
@property (nonatomic) q loadmoreCount;
@property (nonatomic) <AFDPlayRemoteAwemeModelProcessorProtocol> modelProcess;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) NSString keyword;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)initWithKeyword:;
- (long long)hotSpotCount;
- (void)setHotSpotCount:;
- (void)reloadWithPullType:Completion:;
- (BOOL)hitLimit;
- (long long)loadmoreCount;
- (void)setLoadmoreCount:;
- (void)setTask:;
- (void)setOffset:;
- (id)offset;
- (id)task;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)keyword;
- (long long)refreshCount;
- (void)setRefreshCount:;
- (id)modelProcess;
@end
