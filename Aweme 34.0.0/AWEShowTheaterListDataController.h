@interface AWEShowTheaterListDataController : AWEListDataController
@property (nonatomic) NSString awemeIDList;
@property (nonatomic) NSString albumIDList;
@property (nonatomic) NSString episodeIDList;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber enterScene;
@property (nonatomic) NSDictionary requestParamsDic;
@property (nonatomic) BOOL forbidLoadMore;
@property (nonatomic) <AWEHttpTask> reloadTask;
@property (nonatomic) AWEShowTheaterTableViewController parentVC;
- (void)loadMoreWithCompletion:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterScene;
- (void)setEnterScene:;
- (void)reloadWithPullType:Completion:;
- (id)reloadTask;
- (void)setReloadTask:;
- (id)initWithAwemeModelList:context:;
- (id)awemeIDList;
- (void)setAwemeIDList:;
- (id)albumIDList;
- (void)setAlbumIDList:;
- (id)episodeIDList;
- (void)setEpisodeIDList:;
- (id)requestParamsDic;
- (void)setRequestParamsDic:;
- (BOOL)forbidLoadMore;
- (void)setForbidLoadMore:;
- (void)setOffset:;
- (id)offset;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)parentVC;
- (void)setParentVC:;
@end
