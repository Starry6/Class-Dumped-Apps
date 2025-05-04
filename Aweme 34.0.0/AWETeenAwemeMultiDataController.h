@interface AWETeenAwemeMultiDataController : AWEListDataController
@property (nonatomic) NSArray itemIDList;
@property (nonatomic) @? fetchAwemeListBlock;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)itemIDList;
- (void)setItemIDList:;
- (void)p_fetchAwemeListWithCompletion:;
- (id)initWithAwemeList:;
- (void)p_reportAwemeVideoNotTeen:;
- (id)initWithItemIDList:;
- (void)setFetchAwemeListBlock:;
- (id)fetchAwemeListBlock;
- (id)initWithItemIDStr:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
