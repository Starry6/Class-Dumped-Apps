@interface IESECMallMainViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESECMallHomeView homeView;
@property (nonatomic) IESECMallPageCard pageCard;
@property (nonatomic) IESECMallBackgroundView bgView;
@property (nonatomic) UIButton goTopButton;
@property (nonatomic) UIView<IESECMallLoadingViewProtocol> loadingView;
@property (nonatomic) IESECMallLiveMiniWindowService liveMiniWinService;
@property (nonatomic) IESECMallNativeCardCell nativeCardCell;
@property (nonatomic) BOOL isNativeCellMute;
@property (nonatomic) q lastTabId;
@property (nonatomic) NSString nativeCardSchema;
@property (nonatomic) FBKVOController kvoController;
@property (nonatomic) IESECMallLynxRenderMonitor lynxRenderMonitor;
@property (nonatomic) IESECMallNativeRreloadMonitor nativePreloadMonitor;
@property (nonatomic) IESECMallBridgesRegister bridgesRegister;
@property (nonatomic) double containerInitTime;
@property (nonatomic) IESECLynxCardBridgeEventSubscriber subscriber;
@property (nonatomic) BOOL viewDidSetup;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL delayShowLoading;
@property (nonatomic) NSString finishLoadTemplate;
@property (nonatomic) BOOL abMallFixMutiRequest;
@property (nonatomic) BOOL abMallFixRepeatedRequest;
@property (nonatomic) IESECMallViewModel mallViewModel;
@property (nonatomic) BOOL scrollStart;
@property (nonatomic) NSString coinsPendantSchema;
@property (nonatomic) BOOL hasShowCoinPendant;
@property (nonatomic) BOOL hasReportSlide;
@property (nonatomic) IESECListKitCardPreloader preloader;
@property (nonatomic) NSObject<OS_dispatch_queue> reportQueue;
@property (nonatomic) IESECListKitBackgroundModel skinBackground;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) NSTimer loadMoreTimer;
@property (nonatomic) BOOL globalGreyMode;
@property (nonatomic) BOOL needRevetColorful;
@property (nonatomic) BOOL firstScreenShowNotify;
@property (nonatomic) double feedOffsetY;
@property (nonatomic) double baseOffsetY;
@property (nonatomic) BOOL disableDarkmodeGradientSwitch;
@property (nonatomic) IESECMallPopupTaskManager popupManager;
@property (nonatomic) IESECMallPopupView popupView;
@property (nonatomic) IESECMallPopupView coinsView;
@property (nonatomic) NSString lastPageShowId;
@property (nonatomic) NSString curPageShowId;
@property (nonatomic) UIView loginView;
@property (nonatomic) HMDMonitorCallbackObject hmdFPSCallback;
@property (nonatomic) IESECMallListKitBffDataModel stashedPopupData;
@property (nonatomic) BOOL disableLoadmoreModify;
@property (nonatomic) NSCache loadmorePageNumTSDict;
@property (nonatomic) <IESECMallMainViewControllerDelegate> delegate;
@property (nonatomic) NSDictionary currentRouterParams;
@property (nonatomic) NSString openTime;
@property (nonatomic) BOOL forbiddenBottomMargin;
@property (nonatomic) BOOL useCustomTopMargin;
@property (nonatomic) double customTopMargin;
@property (nonatomic) BOOL forbiddenShowLoadingView;
@property (nonatomic) BOOL useCustomBackgroundColor;
@property (nonatomic) UIColor customBackgroundColor;
@property (nonatomic) BOOL transferMainListError;
@property (nonatomic) BOOL forbidFirstScreenStraightOut;
@property (nonatomic) BOOL enableSyncStraightOut;
@property (nonatomic) NSString firstScreenStraightOutIdentity;
@property (nonatomic) double recommendViewFirstViewAppear;
@property (nonatomic) BOOL openSaveStraightOutData;
@property (nonatomic) BOOL didPreloadStraight;
@property (nonatomic) NSNumber sendVisibilityEventNextRunLoop;
@property (nonatomic) q nativeType;
@property (nonatomic) BOOL isImmerseRealDataLockMode;
@property (nonatomic) BOOL isImmerseLiteLockMode;
@property (nonatomic) @? refreshCompletion;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSArray needlessComponents;
@property (nonatomic) Q currentThemeStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buildSubscriber;
- (void)buildUI;
- (id)getToolBarFrame;
- (void)halfMallIsExpandWithCompletion:;
- (void)lynxCardMallReport:isCacheData:;
- (void)mallGetCardPosition:completion:;
- (unsigned long long)pageNum;
- (void)setGoTopButton:;
- (void)setScrollStart:;
- (id)bridgesRegister;
- (double)customTopMargin;
- (void)handleCoinsPop:;
- (BOOL)hasVisiblePopup;
- (BOOL)loadingMoreFlag;
- (id)mallJsbDenylist;
- (void)setBaseOffsetY:;
- (void)setFeedOffsetY:;
- (void)updateSkinData:;
- (void)__updateNextPageCountWithFeed:;
- (BOOL)abMallFixMutiRequest;
- (BOOL)abMallFixRepeatedRequest;
- (void)addBgView;
- (void)addCoinsView;
- (void)addGoTopButton;
- (void)addPageCardWithPageName:;
- (void)addPopupTaskContainer;
- (void)addPopupView;
- (void)anchorPendantDismissWithContainerId:;
- (void)anchorPendantShow:completion:;
- (void)anchorPendantVisibility:visible:;
- (void)appendCommonImpressionArray:;
- (void)appendFilters:;
- (double)baseOffsetY;
- (void)bottomBarChangeNoVisible:;
- (void)bubbleView:resetVisibility:;
- (void)buildBinding;
- (void)buildHeaderRefreshViewIfNeeded;
- (void)callGetFeedDataMethod:completion:;
- (void)callNegativeFeedback:;
- (void)canShowNewLoadingForCDN;
- (id)cellForPaymentSuccess;
- (void)checkAndGetGeckoResource;
- (void)closeHalfMall;
- (void)closeHalfMallWithCompletion:;
- (id)coinsPendantSchema;
- (id)coinsView;
- (void)compensateVisibilityChage:;
- (void)configPreloadStraight;
- (void)configWithRouterParams:enterForm:;
- (void)confirmWithSKUInfo:;
- (double)containerInitTime;
- (double)containerTopMargin;
- (id)curPageShowId;
- (id)currentBridgesRegister;
- (id)currentBundleConfigUrl;
- (id)currentEnvIdentifierForPageCard:;
- (id)currentEnvIdentifierForPopup:;
- (id)currentFeedEnvIdentifier:;
- (id)currentFilters;
- (id)currentListContextIdForPopup:;
- (BOOL)currentListViewIsVisible;
- (double)currentMemory;
- (id)currentPlayingCell;
- (id)currentRouterParams;
- (unsigned long long)currentThemeStyle;
- (void)delayDismissLoadingViewForCDN:;
- (BOOL)delayShowLoading;
- (void)deleteFilters:;
- (void)didCreateCellWith:totalInterval:createCellInterval:configCellInterval:;
- (BOOL)didPreloadStraight;
- (void)didReceiveMemoryWarningNotification;
- (BOOL)disableDarkmodeGradientSwitch;
- (BOOL)disableLoadmoreModify;
- (void)dismissBubbleView:;
- (void)dismissLoadingView;
- (void)dismissPopupView:;
- (BOOL)enableAnimaxWith:;
- (BOOL)enableOptLynxViewLoadLogic;
- (BOOL)enableOptLynxViewLoadLogicForPopup:;
- (BOOL)enableStraightOutRender;
- (BOOL)enableSyncStraightOut;
- (id)enterFrom;
- (id)eventDenyList;
- (long long)favoriteScrollToTopDelayTime;
- (double)feedOffsetY;
- (void)feedViewController:feedback:;
- (void)feedViewController:itemCardRouterSchema:;
- (void)feedViewController:itemCardSetVoiceMute:;
- (void)feedViewController:mallReport:isCacheData:;
- (void)feedViewController:scrollViewDidEndDecelerating:;
- (void)feedViewController:scrollViewDidEndDragging:willDecelerate:;
- (void)feedViewController:scrollViewDidEndScrollingAnimation:;
- (void)feedViewController:scrollViewDidScroll:;
- (void)feedViewController:scrollViewWillBeginDragging:;
- (BOOL)feedViewControllerDidFirstMainRequestFailAndStraightOutRenderEnd:;
- (BOOL)feedViewControllerDidFirstScreen:;
- (id)feedViewControllerGetCurrentRequestContext:;
- (id)feedViewControllerGetGlobalExtra:;
- (id)feedViewControllerGetRootGlobalExtra:;
- (BOOL)feedViewControllerIsCacheData;
- (BOOL)feedViewControllerIsNativeCellCardMute:;
- (void)feedViewControllerLoadMoreData:source:;
- (id)feedViewControllerdidEnvIdentifier:;
- (id)findTabContainerView:;
- (id)finishLoadTemplate;
- (void)finishRefreshMainList:;
- (BOOL)firstScreenShowNotify;
- (id)firstScreenStraightOutIdentity;
- (BOOL)forbidFirstScreenStraightOut;
- (BOOL)forbiddenBottomMargin;
- (BOOL)forbiddenShowLoadingView;
- (void)getPitayaUserBehaviorParamsAndReport;
- (void)getRecommendParams:;
- (id)getSearchBarFrame;
- (id)globalExtraForPopup:;
- (BOOL)globalGreyMode;
- (id)globalPropsExtra;
- (id)globalXBridgesCallHandler;
- (id)goTopButton;
- (void)goTopButtonAction:;
- (void)handleFavoriteSectionIfEmpty:;
- (void)handleMallTabSelectedEvent:;
- (void)handlePitayaBroadcast:;
- (void)handlefeedLoadingError:;
- (BOOL)hasReportSlide;
- (BOOL)hasShowCoinPendant;
- (id)hmBid;
- (id)hmBidForPopup:;
- (id)hmdFPSCallback;
- (void)homePageEndRefreshing;
- (id)homepagePageRootView;
- (id)hybridMonitorContext;
- (id)hybridMonitorContextForPopup:;
- (id)insertItem:inSection:atIndex:animated:;
- (void)invalidLoadMoreTime;
- (id)isCurrentPageVisible;
- (BOOL)isHomePageMallTopMall;
- (BOOL)isImmerseLiteLockMode;
- (BOOL)isImmerseRealDataLockMode;
- (BOOL)isLoadingMore;
- (BOOL)isLoginWithCheckIfNeed;
- (BOOL)isMallInXtab;
- (BOOL)isNativeCellMute;
- (BOOL)isNativeMallVisibleSupport;
- (BOOL)isRequestOnAir;
- (id)kvoController;
- (id)lastPageShowId;
- (long long)lastTabId;
- (void)leaveMall:;
- (id)listCollectionView;
- (id)listVC;
- (void)liveCardDidDisplay:;
- (id)liveMiniWinService;
- (void)loadConfigJsonBundle;
- (void)loadMoreTimeOutHandler;
- (id)loadMoreTimer;
- (void)loadStraightOutData:;
- (id)loadmorePageNumTSDict;
- (long long)loadmoreRangeSize;
- (id)loginView;
- (void)lottieMountMethod:completion:;
- (void)lynxCard:didFirstScreen:resource:itemModel:isPreloader:;
- (void)lynxCard:didLoadFail:resource:itemModel:;
- (void)lynxCard:didUpdateDataWithLynxViewFromType:resource:itemModel:perfDict:;
- (void)lynxCard:onSetup:resource:itemModel:isPreloader:isPreDecode:;
- (void)lynxCardAdReport:;
- (void)lynxCardBffDataUpdate:;
- (void)lynxCardDidFinishLoad:resource:itemModel:;
- (id)lynxCardFeedProductIds:;
- (void)lynxCardMallFeedScrollToTop:;
- (id)lynxCardMallGetPageInfo;
- (id)lynxCardMallGetReportInfo:;
- (void)lynxCardMallReport:;
- (void)lynxCardReceiveError:resource:itemModel:;
- (id)lynxRenderMonitor;
- (id)mallDynamicRequestIMP;
- (BOOL)mallEnableFallbackCustomThemeInSection;
- (BOOL)mallEnableWriteAlog;
- (id)mallGrayFilter;
- (void)mallHomeView:topBarSizeDidChanged:;
- (BOOL)mallHomeViewEnableOptLynxViewLoadLogic;
- (id)mallHomeViewHmBid;
- (id)mallHomeViewHybridMonitorContext;
- (id)mallListInnerNativeMonitor;
- (id)mallListSharedDataIMP;
- (void)mallLynxRenderReport:;
- (BOOL)mallPopupViewEnableOptLynxViewLoadLogic;
- (id)mallPopupViewHmBid;
- (id)mallPopupViewHybridMonitorContext;
- (void)mallRefreshHomepageEvent:;
- (void)mallReport:;
- (void)mallReport:enterNewPage:;
- (unsigned long long)mallResVersion;
- (id)mallViewModel;
- (void)mallWriteAlog:paramModel:result:context:;
- (void)mediaCellDidDisplay;
- (id)nativeCardCell;
- (id)nativeCardSchema;
- (id)nativePreloadMonitor;
- (BOOL)needCheckLogin;
- (BOOL)needCookingNotification:;
- (BOOL)needRevetColorful;
- (id)needlessComponents;
- (void)openNativeSKU:;
- (BOOL)openSaveStraightOutData;
- (id)openTime;
- (id)pageCard;
- (long long)pageCardDynamicParamTimeout;
- (id)pageCardLynxSchema;
- (id)pageNameForPageCard;
- (id)pageNameForPopup:;
- (void)pageVisibilityChage:;
- (void)popupDismissWithContainerId:;
- (id)popupManager;
- (id)popupSubmitTask:;
- (id)popupView;
- (void)popupViewLayoutUpdated;
- (void)popupViewMakeEndPerformance;
- (void)popupViewMakeStartPerformance;
- (void)preloadPageCardWithPageName:;
- (void)readABKeys;
- (void)realLoadMoreByPageCard;
- (void)realRefreshByPageCard;
- (void)realRequestByPageCard:apiKeys:withHandler:forbidEvent:;
- (void)realRequestByPageCardReport:isTimeout:startTime:;
- (void)rebuildConstraints:;
- (void)rebuildConstraintsWhiltTopMarginChanged;
- (double)recommendViewFirstViewAppear;
- (id)refreshCompletion;
- (void)refreshImmerseFullScreenCompensationRealData;
- (void)refreshImmerseFullScreenFirstScreenRealData;
- (void)removeFilters;
- (void)removeLoginViewIfNeed;
- (id)removeStorageKeys;
- (void)removeStorageKeysIfNeed;
- (void)reportSchemaDiff:outSchema:;
- (void)reportWindowFPS:;
- (void)requestClientAiPrefetchApis:message:completion:;
- (void)requestFirstScreenApis;
- (void)requestRefreshApis;
- (void)requireLogin;
- (id)responderView;
- (id)responderViewForBtm;
- (id)rootGlobalExtraForPopup:;
- (id)rootGlobalPropsExtra;
- (BOOL)scrollStart;
- (void)scrollToFirstFavoriteCellWithSectionID:animated:;
- (void)sendEvent:params:;
- (void)sendMallReportTrackerNative:;
- (id)sendVisibilityEventNextRunLoop;
- (void)setAbMallFixMutiRequest:;
- (void)setAbMallFixRepeatedRequest:;
- (void)setBridgesRegister:;
- (void)setCoinsPendantSchema:;
- (void)setCoinsView:;
- (void)setContainerInitTime:;
- (void)setCurPageShowId:;
- (void)setCurrentRouterParams:;
- (void)setCurrentThemeStyle:;
- (void)setCustomLoadMoreView:;
- (void)setCustomNoMoreView:;
- (void)setCustomTopMargin:;
- (void)setDelayShowLoading:;
- (void)setDidPreloadStraight:;
- (void)setDisableDarkmodeGradientSwitch:;
- (void)setDisableLoadmoreModify:;
- (void)setEnableSyncStraightOut:;
- (void)setEnterFrom:;
- (void)setFinishLoadTemplate:;
- (void)setFirstScreenShowNotify:;
- (void)setFirstScreenStraightOutIdentity:;
- (void)setFooterEndRefreshing;
- (void)setForbidFirstScreenStraightOut:;
- (void)setForbiddenBottomMargin:;
- (void)setForbiddenShowLoadingView:;
- (void)setGlobalGreyMode:;
- (void)setGreyIfNeed:;
- (void)setHasReportSlide:;
- (void)setHasShowCoinPendant:;
- (void)setHmdFPSCallback:;
- (void)setHomeView:;
- (void)setIsImmerseLiteLockMode:;
- (void)setIsImmerseRealDataLockMode:;
- (void)setIsLoadingMore:;
- (void)setIsNativeCellMute:;
- (void)setIsRequestOnAir:;
- (void)setKvoController:;
- (void)setLastPageShowId:;
- (void)setLastTabId:;
- (void)setLiveMiniWinService:;
- (void)setLoadMoreTimer:;
- (void)setLoadmorePageNumTSDict:;
- (void)setLoginView:;
- (void)setLynxRenderMonitor:;
- (void)setMallViewModel:;
- (void)setNativeCardCell:;
- (void)setNativeCardSchema:;
- (void)setNativePreloadMonitor:;
- (void)setNativeType:;
- (void)setNeedRecordPageShowIdIfNeed:;
- (void)setNeedRevetColorful:;
- (void)setNeedlessComponents:;
- (void)setOpenSaveStraightOutData:;
- (void)setOpenTime:;
- (void)setPageCard:;
- (void)setPopupManager:;
- (void)setPopupView:;
- (void)setRecommendViewFirstViewAppear:;
- (void)setRefreshCompletion:;
- (void)setSendVisibilityEventNextRunLoop:;
- (void)setSkinBackground:;
- (void)setStashedPopupData:;
- (void)setTransferMainListError:;
- (void)setUseCustomBackgroundColor:;
- (void)setUseCustomTopMargin:;
- (void)setViewDidSetup:;
- (void)setupLiveMiniWindow;
- (void)setupNeedlessComponents:;
- (void)setupTimingModelProps;
- (id)sharedLynxGroupID:;
- (BOOL)shouldRequestSelectedSection:;
- (BOOL)shouldSendVisibilityEventNextRunLoop;
- (void)showLoginViewIfNeed;
- (void)showOrHideLiveMiniWindow;
- (id)skinBackground;
- (void)startPreload;
- (id)stashedPopupData;
- (void)stopCoinsViewCountDown;
- (void)stopPreload;
- (void)subscribeFpsEvent;
- (void)topBarChangeNoVisible:;
- (void)trackGYLFetchByAction:;
- (void)trackerDidLoad;
- (void)trackerFirstScreenTime;
- (void)trackerFpsPerformance;
- (void)trackerGoToTopShow;
- (void)trackerLoadmorePerformance;
- (void)trackerScrollToTop;
- (BOOL)transferMainListError;
- (void)tryAddPendantToList:with:;
- (id)tryFindPendantSuperView:;
- (void)tryShowDesktopGuide;
- (void)unregisterSubscriber;
- (void)updateBackgroundColorInNeeded:;
- (void)updateContextPropsExtraData;
- (void)updateFilters:completion:;
- (void)updateLocationIfNeed;
- (void)updateSelectedTabInfo:curSectionModel:;
- (void)updateSkinDataDefault;
- (void)updateSpecificSectionForFeed:;
- (void)updateThemeStyle:defaultBgUrl:;
- (void)updateThemeStyleImmediately:;
- (BOOL)useCustomBackgroundColor;
- (BOOL)useCustomTopMargin;
- (BOOL)viewDidSetup;
- (id)visibleBubbleViews;
- (id)xBridgesCallHandler;
- (id)subscriber;
- (void)appWillEnterForeground:;
- (id)init;
- (void)setReportQueue:;
- (void)setCustomBackgroundColor:;
- (void)dealloc;
- (void)appDidEnterBackground:;
- (void)setDelegate:;
- (id)customBackgroundColor;
- (void)viewDidDisappear:;
- (void)sendAction:;
- (id)reportQueue;
- (void)viewWillDisappear:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)scrollToTopAnimated:;
- (void)viewDidLoad;
- (id)bgView;
- (void)setBgView:;
- (id)preloader;
- (void)setPreloader:;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:;
- (void)scrollToVisible;
- (void)setSubscriber:;
- (void)addNotificationObserver;
- (id)homeView;
- (id)envIdentifier;
- (void)appendAction:;
- (id)pageName;
- (long long)nativeType;
- (void)buildConstraints;
+ (BOOL)removeStorageByConfigV2;
+ (id)removeStorageConfigV2;
@end
