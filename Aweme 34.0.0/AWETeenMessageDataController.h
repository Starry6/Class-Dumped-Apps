@interface AWETeenMessageDataController : AWEListDataController
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) q topGroup;
@property (nonatomic) q count;
@property (nonatomic) q maxTime;
@property (nonatomic) q minTime;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (long long)topGroup;
- (void)setTopGroup:;
- (id)p_getParamsWithPullType:;
- (void)loadMessageList:completion:;
- (void)setTask:;
- (void)setMaxTime:;
- (void)setCount:;
- (void)setMinTime:;
- (long long)maxTime;
- (long long)minTime;
- (id)task;
- (long long)count;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
