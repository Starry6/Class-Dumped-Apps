@interface AWEECAwemeVideoDataController : AWEListDataController
@property (nonatomic) NSArray awemeInfos;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)awemeInfos;
- (id)awemeModelWithIndex:;
- (long long)indexOfAwemeModel:;
- (void)setAwemeInfos:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
