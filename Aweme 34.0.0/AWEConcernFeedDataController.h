@interface AWEConcernFeedDataController : AWEListDataController
@property (nonatomic) AWEConcernFeedRequestParamBuilder paramsBuilder;
@property (nonatomic) AWEConcernFeedResponseMonitor responseMonitor;
@property (nonatomic) AWESmartFeedLastViewModel lastViewModel;
@property (nonatomic) BOOL isUploadAwemeInsertedBeforeInitialFetch;
@property (nonatomic) BOOL isVCDAuthFirstTime;
@property (nonatomic) NSString blankPanelText;
@property (nonatomic) NSString previousPageValue;
@property (nonatomic) q level;
@property (nonatomic) BOOL currentRequestContainsForceInsert;
@property (nonatomic) BOOL isForceInsertVideoOrLiveRequest;
@property (nonatomic) BOOL isAidRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setPreviousPageValue:;
- (id)previousPageValue;
- (id)blankPanelText;
- (void)setBlankPanelText:;
- (id)liveModuleService;
- (void)albumAppendImagesNotificationHandler:;
- (id)paramsBuilder;
- (void)setIsAidRequest:;
- (void)setIsForceInsertVideoOrLiveRequest:;
- (void)setCurrentRequestContainsForceInsert:;
- (void)didHitCachedAwemeList:completion:;
- (void)didFinishRequestType:response:error:completion:;
- (void)requestFollowFeedWithParams:completion:;
- (void)didFinishLoadMoreWithResponse:error:completion:;
- (void)updateFeedPullType:dataList:;
- (void)setLastViewModel:;
- (void)updateConcernCardListInfo:feedType:;
- (id)filterDuplicatedAwemeWithArray:pullType:requestID:;
- (BOOL)shouldSaveAwemeBeforeInitRequest;
- (void)setIsUploadAwemeInsertedBeforeInitialFetch:;
- (id)handleSpecialCard:pullType:;
- (void)didFinishTransferResponse:toAwemeList:pullType:;
- (id)responseMonitor;
- (id)lastViewModel;
- (BOOL)isUploadAwemeInsertedBeforeInitialFetch;
- (void)setIsVCDAuthFirstTime:;
- (BOOL)isVCDAuthFirstTime;
- (BOOL)currentRequestContainsForceInsert;
- (BOOL)isForceInsertVideoOrLiveRequest;
- (BOOL)isAidRequest;
- (void)setParamsBuilder:;
- (void)setResponseMonitor:;
- (void)setLevel:;
- (id)init;
- (long long)level;
- (id)urlPath;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
