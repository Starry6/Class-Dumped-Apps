@interface AWESearchMiddleBaseViewController : UIViewController
@property (nonatomic) BOOL historyDidMount;
@property (nonatomic) BOOL guessDidMount;
@property (nonatomic) BOOL guessDidLoad;
@property (nonatomic) BOOL needsReloadHistory;
@property (nonatomic) BOOL historyLiveTagReqDone;
@property (nonatomic) BOOL isVoiceOverRunning;
@property (nonatomic) BOOL viewDidAppear;
@property (nonatomic) BOOL isFirstAppearTrack;
@property (nonatomic) BOOL isKeyboardHasShow;
@property (nonatomic) BOOL hasTemplateReady;
@property (nonatomic) BOOL isFirstShowMiddlePage;
@property (nonatomic) BOOL keyboardShowing;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) NSString broadCastEnterMethod;
@property (nonatomic) AWESearchCachalotView cachalotView;
@property (nonatomic) AWESearchMiddleCachalotContext cachalotContext;
@property (nonatomic) AWETrackerContext trackerContext;
@property (nonatomic) CachalotMonitorContext monitorContext;
@property (nonatomic) AWESearchUtility searchUtility;
@property (nonatomic) AWESearchBulletCardLifeCycleClient bulletLifeCycleCient;
@property (nonatomic) AWESearchCachalotViewData cachalotData;
@property (nonatomic) AWESearchCachalotLynxPipeline lynxPipline;
@property (nonatomic) q gsRequestTime;
@property (nonatomic) q gsResponseTime;
@property (nonatomic) q postGSDataTime;
@property (nonatomic) q enterSearchInitTime;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) NSDictionary dataToPost;
@property (nonatomic) NSMutableArray prefetchedEventNames;
@property (nonatomic) NSDictionary preDataToPost;
@property (nonatomic) NSMutableDictionary lynxRawData;
@property (nonatomic) NSString historyLiveTagResponse;
@property (nonatomic) NSDictionary hotListPostData;
@property (nonatomic) NSString virImpressionExtraInfo;
@property (nonatomic) BOOL poiMsgReady;
@property (nonatomic) BOOL hasRegistBridge;
@property (nonatomic) BOOL enableGuessLogFix;
@property (nonatomic) BOOL rsSwitch;
@property (nonatomic) NSTimer touchTimer;
@property (nonatomic) NSString predictID;
@property (nonatomic) AWESearchMiddlePageConfig pageConfig;
@property (nonatomic) <AWESearchMiddleProtocol> delegate;
@property (nonatomic) NSString afterFeedParamsForTracker;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL isInteractiveShowing;
@property (nonatomic) BOOL showKeyboardWhenBack;
@property (nonatomic) BOOL hasGSDataSend;
@property (nonatomic) AWESearchSchemaModel routerModel;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterFromSecond;
@property (nonatomic) double clickBtnTime;
@property (nonatomic) BOOL returnPrefetchGS;
@property (nonatomic) NSString preRequestTag;
@property (nonatomic) BOOL skipAutoShowKeyboard;
@property (nonatomic) NSString searchType;
@property (nonatomic) NSString enterSearchRecommendWord;
@property (nonatomic) BOOL isFromHomepage;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString poiId;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) BOOL isFromExplore;
@property (nonatomic) BOOL isFromLifeService;
@property (nonatomic) BOOL isRecommendStyle;
@property (nonatomic) Q searchStyleType;
@property (nonatomic) q enterFromType;
@property (nonatomic) NSDictionary schemaExtralData;
@property (nonatomic) @? searchBarPromotionTagBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (id)enterFrom;
- (void)setRefer:;
- (id)preRequestTag;
- (void)setPreRequestTag:;
- (id)refer;
- (id)lynxRawData;
- (void)setLynxRawData:;
- (void)configureUI;
- (void)setTrackerContext:;
- (void)customRouterOutMonitorParamsWithCompletion:;
- (void)setKeyboardShowing:;
- (void)registerBridge;
- (void)componentDidFinishRender:withViewModel:;
- (void)handleBroadcastNotification:;
- (void)themeDidChange:;
- (void)setIsFromHomepage:;
- (BOOL)isFromHomepage;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (void)voiceOverStatusChanged:;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (id)enterFromSecond;
- (void)setEnterFromSecond:;
- (id)trackerContext;
- (id)routerModel;
- (void)setRouterModel:;
- (id)customBtmPageIdentifier;
- (id)cachalotContext;
- (id)cachalotView;
- (void)setCachalotView:;
- (id)searchUtility;
- (void)setSearchUtility:;
- (void)setEnterSearchInitTime:;
- (void)setVirImpressionExtraInfo:;
- (void)setIsVoiceOverRunning:;
- (BOOL)needsReloadHistory;
- (void)setNeedsReloadHistory:;
- (void)sendViewAppearEvent;
- (void)sendViewDisAppearEvent;
- (void)setHistoryLiveTagReqDone:;
- (void)sendHistoryLiveTagRequest;
- (id)searchBarPromotionTagBlock;
- (void)deliverLifecycleMessage:;
- (void)deliverMessage:extra:;
- (BOOL)isInteractiveShowing;
- (void)setHistoryDidMount:;
- (void)deliverHistoryLiveTagIfNeeded;
- (void)setGuessDidLoad:;
- (void)setGuessDidMount:;
- (id)advantagePointLogExtraWithData:eventName:;
- (void)updateRealWordsInArray:andVirInfo:;
- (id)getHistoryLiveTagReqQuery;
- (void)setHistoryLiveTagResponse:;
- (BOOL)historyLiveTagReqDone;
- (BOOL)historyDidMount;
- (id)historyLiveTagResponse;
- (id)virImpressionExtraInfo;
- (long long)enterSearchInitTime;
- (id)getLynxConfig;
- (id)schemaExtralData;
- (id)getPenetrateParamsForServer;
- (long long)p_isFirstLaunchSearch;
- (void)updateViewForRotate;
- (void)setIsInteractiveShowing:;
- (void)setSearchBarPromotionTagBlock:;
- (void)setCachalotContext:;
- (id)initWithRouterModel:;
- (long long)enterFromType;
- (void)setEnterFromType:;
- (id)userRecommendSearchSwitch;
- (long long)hitKeyboardShowStrategyValue;
- (void)configureCachalot;
- (BOOL)enableGSPrefetch;
- (void)didPreftedGuessWords;
- (void)beginTrackKeyboardShowEvent;
- (void)cancelTrackKeyboardShowEvent;
- (BOOL)shouldShowKeyboardWhenBack;
- (void)setShowKeyboardWhenBack:;
- (void)setDataToPost:;
- (void)dealPredictFetchAck;
- (void)endTouchTimer;
- (id)predictID;
- (void)fetchGuessedSearchKeyword;
- (void)p_sendHotListRequest;
- (id)lynxPipline;
- (void)setCachalotData:;
- (BOOL)enableGuessLogFix;
- (void)setHasTemplateReady:;
- (BOOL)enableCommunicationOpt;
- (BOOL)isRecommendStyle;
- (id)dataToPost;
- (void)setHasGSDataSend:;
- (void)updateGSDataIfNeed;
- (BOOL)isFromLifeService;
- (BOOL)isFromExplore;
- (id)broadCastEnterMethod;
- (id)bulletLifeCycleCient;
- (BOOL)poiMsgReady;
- (void)keyboardShowStatusTrack;
- (BOOL)isFirstAppearTrack;
- (BOOL)isKeyboardHasShow;
- (void)setIsFirstAppearTrack:;
- (void)setIsKeyboardHasShow:;
- (void)deliverGuessedSearchDataIfNeeded;
- (void)setPoiMsgReady:;
- (void)setBroadCastEnterMethod:;
- (void)setPredictID:;
- (void)beginTouchTimerWithPrefetchID:;
- (id)dictionaryFromPredictFetchParamModel:;
- (id)convertPredictID:;
- (void)setTouchTimer:;
- (id)touchTimer;
- (id)preDataToPost;
- (void)setGsRequestTime:;
- (void)setGsResponseTime:;
- (void)setPreDataToPost:;
- (void)handleGSResponseWithData:error:;
- (BOOL)returnPrefetchGS;
- (void)handlePredictFetch:;
- (void)handlePredictFetchMiss:;
- (BOOL)hasRegistBridge;
- (void)setHasRegistBridge:;
- (id)getStringArrayFromString:;
- (void)trackGSPrefetchFail;
- (long long)p_clickIntoSearchTime;
- (long long)gsRequestTime;
- (long long)gsResponseTime;
- (void)setPostGSDataTime:;
- (long long)postGSDataTime;
- (BOOL)guessDidMount;
- (BOOL)guessDidLoad;
- (BOOL)hasGSDataSend;
- (BOOL)hasTemplateReady;
- (id)p_hotListUrl;
- (id)p_hotListRequestParams;
- (void)setHotListPostData:;
- (void)p_updateHotListDataIfNeeded;
- (id)hotListPostData;
- (id)getLynxInitRawDataParams;
- (id)getLynxPipelineForCachalot;
- (id)afterFeedParamsForTracker;
- (BOOL)enableTemplateBundle;
- (unsigned long long)searchStyleType;
- (id)cachalotData;
- (void)setBulletLifeCycleCient:;
- (BOOL)showKeyboardWhenBack;
- (void)setNeedsUpdateHistory;
- (void)returnTransferWith:;
- (void)resetReturnPrefetchGS:;
- (void)setSchemaExtralData:;
- (void)setAfterFeedParamsForTracker:;
- (id)enterSearchRecommendWord;
- (void)setEnterSearchRecommendWord:;
- (void)setSearchStyleType:;
- (void)setIsFromExplore:;
- (void)setIsFromLifeService:;
- (BOOL)isFirstShowMiddlePage;
- (void)setIsRecommendStyle:;
- (void)setLynxPipline:;
- (double)clickBtnTime;
- (void)setClickBtnTime:;
- (void)setReturnPrefetchGS:;
- (void)setEnableGuessLogFix:;
- (id)getMiddlePageConfig;
- (void)syncHistoryIfNeeded;
- (void)reloadCachalotView;
- (BOOL)enableMiddlePagePrefetch;
- (id)customGenerateCachalotView;
- (void)improveGSNetworkPriorityIfNeeded;
- (void)resetGSNetworkPriorityIfNeeded;
- (BOOL)enableSearchMiddleGSNetworkPriorityOpt;
- (BOOL)enableSimplifyOfMoreHistoryPage;
- (BOOL)enableStartMonitor;
- (void)predecodeForTemplateBundle;
- (void)notifyRefreshHistoryData;
- (void)setSkipAutoShowKeyboard:;
- (void)handlePredictFetchWithNoti:;
- (void)handlePredictFetchMissWithNoti:;
- (void)didPrefetchMiddlePageUrl:;
- (BOOL)enableAnniex;
- (void)configDefaultPlaceHolderText;
- (BOOL)enableMiddlePrelayout;
- (void)updateLynxRawData:event:completion:;
- (void)lynxViewDidReload;
- (BOOL)enableUpdateGSData;
- (void)prefetchMiddlePageDatas;
- (id)middlePageTraceIdentifier;
- (void)keyboardDidShowWithHeight:;
- (void)keyboardDidHideWithHeight:;
- (BOOL)enableGetRecommendReasonAndSearchPassParamsStruct;
- (void)sendMiddleTraceInfo;
- (BOOL)enableFixThemeHotChange;
- (BOOL)didPrefetchMiddlePageForEventName:;
- (id)prefetchedEventNames;
- (void)handlePrefetchResponseWithData:error:forEventName:requestTime:responseTime:;
- (BOOL)skipAutoShowKeyboard;
- (id)getSSEPreFetchData;
- (BOOL)enableCustomGid;
- (BOOL)enableUseNewGSReqInterface;
- (BOOL)rsSwitch;
- (void)guessSearchDataDidSend:;
- (BOOL)enableNewLynxConfig;
- (id)getExtraLynxConfig;
- (id)addSettingsWithSettingsArray:;
- (id)getLynxConfigBizExtraSubDictWithKey:;
- (id)getLynxConfigBizMiddleInfoExtra;
- (BOOL)enableUpdateUIForViewChange;
- (BOOL)enableRequestPackageSimplify;
- (id)preLayoutGlobalProps;
- (id)mergeLynxDic:;
- (id)mergeRecursivelyWithTarget:originDic:;
- (void)setIsFirstShowMiddlePage:;
- (void)setPrefetchedEventNames:;
- (void)setRsSwitch:;
- (void)keyboardDidHide:;
- (void)viewWillDisappear:;
- (void)keyboardWillHide:;
- (BOOL)isShowing;
- (double)keyboardHeight;
- (id)searchType;
- (void)dealloc;
- (void)didEnterBackground:;
- (id)delegate;
- (void)setSearchType:;
- (void)showKeyboard;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dismissKeyboard;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (BOOL)isAppearing;
- (void)handleNotification:;
- (void)viewDidDisappear:;
- (void)setKeyboardHeight:;
- (id)containerID;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setIsAppearing:;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (BOOL)viewDidAppear;
- (void)keyboardDidShow:;
- (id)authorName;
- (id)poiId;
- (void)setPoiId:;
- (id)keyword;
- (void)setAuthorName:;
- (void)didEnterForeground:;
- (void)setViewDidAppear:;
- (BOOL)isVoiceOverRunning;
- (id)requestParams;
- (void)setRequestParams:;
- (id)pageConfig;
- (void)setPageConfig:;
- (id)monitorContext;
- (void)setMonitorContext:;
- (BOOL)keyboardShowing;
- (void)setupNotification;
@end
