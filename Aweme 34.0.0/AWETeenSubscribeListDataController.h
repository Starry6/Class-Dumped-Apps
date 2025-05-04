@interface AWETeenSubscribeListDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber count;
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) NSDictionary logPassback;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)logPassback;
- (void)setLogPassback:;
- (void)reloadWithPullType:Completion:;
- (id)cursor;
- (void)setTask:;
- (id)init;
- (void)setCount:;
- (id)task;
- (id)count;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
