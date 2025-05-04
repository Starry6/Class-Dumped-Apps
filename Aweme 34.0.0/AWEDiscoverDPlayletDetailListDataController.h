@interface AWEDiscoverDPlayletDetailListDataController : AWEListDataController
@property (nonatomic) NSString playletID;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)playletID;
- (void)setPlayletID:;
- (void)reloadWithPullType:Completion:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
