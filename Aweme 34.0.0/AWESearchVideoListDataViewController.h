@interface AWESearchVideoListDataViewController : AWEListDataController
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSString backtrace;
@property (nonatomic) q refreshCount;
@property (nonatomic) q loadmoreCount;
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) <AWEHttpTask> requestTask;
@property (nonatomic) q hotSpotCount;
@property (nonatomic) AWESearchKeyWordModel keyWord;
@property (nonatomic) NSString gsKeyword;
@property (nonatomic) NSString correctName;
@property (nonatomic) AWERiskPreventModel riskPreventModel;
@property (nonatomic) NSString requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) BOOL shouldHideCorrection;
@property (nonatomic) AWESearchCorrectModel correctModel;
@property (nonatomic) NSArray guideSearchWordList;
@property (nonatomic) BOOL isSwitchTab;
@property (nonatomic) NSString previousSearchID;
@property (nonatomic) NSString previousTab;
@property (nonatomic) NSString hideWords;
@property (nonatomic) NSString currentLogId;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) NSDictionary searchExtraParams;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) NSDictionary filterParams;
@property (nonatomic) NSDictionary searchRequestLogQueries;
@property (nonatomic) UIViewController refViewController;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (nonatomic) AWESearchFrequencyManager frequencyManager;
@property (nonatomic) AWESearchHarmfulCategoryManager harmfulCategoryManager;
@property (nonatomic) BOOL isSearchSourceGS;
@property (nonatomic) NSString initialSearchSource;
@property (nonatomic) @? beforeBuildRequestBlock;
@property (nonatomic) @? willLoadmoreBlock;
@property (nonatomic) @? didReceiveLoadmoreResponseBlock;
@property (nonatomic) @? didEndLoadmoreBlock;
- (id)hideWords;
- (void)loadMoreWithCompletion:;
- (id)extraModel;
- (void)initFetchWithCompletion:;
- (void)setExtraModel:;
- (id)logPassback;
- (void)setLogPassback:;
- (id)searchExtraParams;
- (void)setSearchExtraParams:;
- (void)setFilterParams:;
- (id)filterParams;
- (id)guideSearchWordList;
- (void)setGuideSearchWordList:;
- (id)riskPreventModel;
- (void)setRiskPreventModel:;
- (id)correctName;
- (void)setCorrectName:;
- (id)correctModel;
- (void)setCorrectModel:;
- (void)setHideWords:;
- (id)keyWord;
- (id)getExpectedSizeInfo;
- (long long)hotSpotCount;
- (void)setHotSpotCount:;
- (void)reloadWithPullType:Completion:;
- (void)setKeyWord:;
- (void)setPreviousTab:;
- (id)previousTab;
- (void)setInitialSearchSource:;
- (id)initialSearchSource;
- (BOOL)isFilterSearch;
- (BOOL)isSwitchTab;
- (id)previousSearchID;
- (void)setShouldHideCorrection:;
- (id)searchRequestLogQueries;
- (id)refViewController;
- (void)p_handleRefreshServerTimeCost:;
- (void)setCurrentLogId:;
- (id)frequencyManager;
- (id)harmfulCategoryManager;
- (void)setIsFilterSearch:;
- (void)setPreviousSearchID:;
- (void)setIsSwitchTab:;
- (BOOL)shouldHideCorrection;
- (void)setSearchRequestLogQueries:;
- (id)currentLogId;
- (id)beforeBuildRequestBlock;
- (void)setBeforeBuildRequestBlock:;
- (void)setRefViewController:;
- (void)setFrequencyManager:;
- (void)setHarmfulCategoryManager:;
- (BOOL)fromHotSearch;
- (void)setFromHotSearch:;
- (BOOL)shouldLoginLimit;
- (BOOL)hitLimit;
- (long long)loadmoreCount;
- (void)setLoadmoreCount:;
- (void)setHitLimit:;
- (void)setShouldLoginLimit:;
- (BOOL)isSearchSourceGS;
- (void)addSearchAdDebugParams:;
- (void)logSearchAdDebugInfo:;
- (void)registerSupportSearchSourceIfNeededRefresh;
- (void)setIsSearchSourceGS:;
- (id)willLoadmoreBlock;
- (id)didReceiveLoadmoreResponseBlock;
- (id)didEndLoadmoreBlock;
- (void)preProcessAweme:pullType:;
- (id)gsKeyword;
- (void)setGsKeyword:;
- (void)setWillLoadmoreBlock:;
- (void)setDidReceiveLoadmoreResponseBlock:;
- (void)setDidEndLoadmoreBlock:;
- (id)backtrace;
- (void)setTask:;
- (id)init;
- (id)requestID;
- (void)setOffset:;
- (id)offset;
- (void)setRequestID:;
- (id)task;
- (id)requestTask;
- (void)setRequestTask:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setBacktrace:;
- (long long)refreshCount;
- (void)setRefreshCount:;
+ (BOOL)addVideoNormalDebugLog;
+ (void)videoSearchRequestWithParams:responseBlock:completionBlock:;
+ (BOOL)fixNoResultShowSearchPv;
+ (BOOL)addVideoNormalRequestParams;
+ (BOOL)fixVideoExitSearch;
@end
