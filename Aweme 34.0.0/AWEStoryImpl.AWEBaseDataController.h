@interface AWEStoryImpl.AWEBaseDataController : AWEListDataController
@property (nonatomic) NSMutableArray dataSource;
- (void)dataDidChangeInArray:;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setDataSource:;
- (id)dataSource;
@end
