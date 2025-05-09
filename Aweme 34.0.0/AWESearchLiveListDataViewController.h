@interface AWESearchLiveListDataViewController : AWEListDataController
@property (nonatomic) NSNumber offset;
@property (nonatomic) q refreshCount;
@property (nonatomic) q loadmoreCount;
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) NSString dateString;
@property (nonatomic) NSString unifiedSearchId;
@property (nonatomic) NSString keyWord;
@property (nonatomic) AWERiskPreventModel riskPreventModel;
@property (nonatomic) NSString requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (nonatomic) NSString searchSource;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) BOOL isSwitchTab;
@property (nonatomic) NSString previousSearchID;
@property (nonatomic) NSString previousTab;
@property (nonatomic) NSDictionary searchExtraParams;
@property (nonatomic) UIViewController refViewController;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (nonatomic) AWESearchFrequencyManager frequencyManager;
@property (nonatomic) AWESearchHarmfulCategoryManager harmfulCategoryManager;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) NSDictionary searchRequestLogQueries;
@property (nonatomic) NSString liveIDList;
@property (nonatomic) q searchResultCount;
@property (nonatomic) NSString fromRoomId;
@property (nonatomic) NSString innerLiveType;
@property (nonatomic) NSString liveCardType;
@property (nonatomic) BOOL isInnerLive;
@property (nonatomic) NSString searchResultId;
@property (nonatomic) q docType;
@property (nonatomic) NSString alaSrc;
@property (nonatomic) NSMutableDictionary filteredToRaw;
@property (nonatomic) NSMutableDictionary rawToFiltered;
@property (nonatomic) @? beforeBuildRequestBlock;
@property (nonatomic) NSString streamSearchId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)extraModel;
- (void)initFetchWithCompletion:;
- (id)searchResultId;
- (void)setExtraModel:;
- (void)setSearchResultId:;
- (void)calculateFilteredDataSource;
- (long long)dataSourceIndexFromFilteredIndex:;
- (long long)filteredDataSourceIndexFromIndex:;
- (id)logPassback;
- (void)setLogPassback:;
- (id)searchExtraParams;
- (void)setSearchExtraParams:;
- (id)currentTimeStr;
- (id)riskPreventModel;
- (void)setRiskPreventModel:;
- (id)keyWord;
- (void)reloadWithPullType:Completion:;
- (void)setKeyWord:;
- (void)setPreviousTab:;
- (id)previousTab;
- (id)searchChannel;
- (void)setSearchChannel:;
- (BOOL)isSwitchTab;
- (id)previousSearchID;
- (id)searchRequestLogQueries;
- (id)refViewController;
- (void)p_handleRefreshServerTimeCost:;
- (id)frequencyManager;
- (id)harmfulCategoryManager;
- (void)setPreviousSearchID:;
- (void)setIsSwitchTab:;
- (void)setSearchRequestLogQueries:;
- (id)beforeBuildRequestBlock;
- (void)setBeforeBuildRequestBlock:;
- (void)setRefViewController:;
- (void)setFrequencyManager:;
- (void)setHarmfulCategoryManager:;
- (BOOL)fromHotSearch;
- (void)setFromHotSearch:;
- (BOOL)shouldLoginLimit;
- (BOOL)hitLimit;
- (id)streamSearchId;
- (long long)searchResultCount;
- (void)setSearchResultCount:;
- (void)setAlaSrc:;
- (id)alaSrc;
- (id)buildSendBackDocsForRequest;
- (long long)loadmoreCount;
- (void)setLoadmoreCount:;
- (void)setHitLimit:;
- (id)liveCardType;
- (void)setLiveCardType:;
- (void)setFilteredToRaw:;
- (void)setRawToFiltered:;
- (id)filteredToRaw;
- (id)rawToFiltered;
- (void)setShouldLoginLimit:;
- (id)innerLiveType;
- (void)setInnerLiveType:;
- (void)setFromRoomId:;
- (id)fromRoomId;
- (id)liveIDList;
- (id)unifiedSearchId;
- (BOOL)isInnerLive;
- (void)setStreamSearchId:;
- (void)setUnifiedSearchId:;
- (BOOL)isFewResults;
- (void)reloadRecommondLiveWithPullType:Completion:;
- (void)reloadFeedLiveWithPullType:Completion:;
- (void)setLiveIDList:;
- (void)setIsInnerLive:;
- (void)setTask:;
- (id)init;
- (id)requestID;
- (void)setOffset:;
- (id)offset;
- (void)setRequestID:;
- (id)task;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)dateString;
- (id)searchSource;
- (void)setSearchSource:;
- (void)setDocType:;
- (void)setDateString:;
- (long long)docType;
- (long long)refreshCount;
- (void)setRefreshCount:;
@end
