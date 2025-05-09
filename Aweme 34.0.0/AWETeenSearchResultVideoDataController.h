@interface AWETeenSearchResultVideoDataController : AWEListDataController
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSString backtrace;
@property (nonatomic) q refreshCount;
@property (nonatomic) q loadmoreCount;
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) AWETeenSearchKeywordModel keyWord;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString searchID;
@property (nonatomic) NSString requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) UIViewController refViewController;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (nonatomic) NSString initialSearchSource;
@property (nonatomic) NSString emptyPageTitle;
@property (nonatomic) NSString emptyPageDetail;
- (void)loadMoreWithCompletion:;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (void)initFetchWithCompletion:;
- (id)logPassback;
- (void)setLogPassback:;
- (void)setIsFirst:;
- (id)keyWord;
- (id)getExpectedSizeInfo;
- (void)reloadWithPullType:Completion:;
- (void)setKeyWord:;
- (void)setInitialSearchSource:;
- (id)initialSearchSource;
- (id)refViewController;
- (void)setRefViewController:;
- (BOOL)fromHotSearch;
- (void)setFromHotSearch:;
- (BOOL)shouldLoginLimit;
- (BOOL)hitLimit;
- (long long)loadmoreCount;
- (void)setLoadmoreCount:;
- (void)setHitLimit:;
- (void)setShouldLoginLimit:;
- (void)p_reportAwemeVideoNotTeen:;
- (void)trackEventIfNeeded:param:reponse:error:;
- (id)emptyPageTitle;
- (void)setEmptyPageTitle:;
- (id)emptyPageDetail;
- (void)setEmptyPageDetail:;
- (void)p_addSearchTrack:;
- (void)setGroupID:;
- (id)backtrace;
- (void)setTask:;
- (id)init;
- (id)requestID;
- (id)groupID;
- (void)setOffset:;
- (id)offset;
- (void)setRequestID:;
- (id)task;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
- (BOOL)isFirst;
- (id)searchID;
- (void)setSearchID:;
- (void)setBacktrace:;
- (long long)refreshCount;
- (void)setRefreshCount:;
@end
