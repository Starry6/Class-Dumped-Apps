@interface IESECLiveGoodsListViewModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECLiveGoodsListDataStore dataStore;
@property (nonatomic) IESECLiveGoodsListPageModel listModel;
@property (nonatomic) NSArray itemViewModelsOnShow;
@property (nonatomic) IESECLiveListSKUInfo selectedSKUItem;
@property (nonatomic) IESECLiveGoodsListBannerInfoModel localBanner;
@property (nonatomic) IESECQualityInfoV2 qualityInfo;
@property (nonatomic) NSString lastExplainPromotionId;
@property (nonatomic) IESECGCDTimer campaignTimer;
@property (nonatomic) IESECLiveLocalTimerTaskUtils localTimerTaskUtils;
@property (nonatomic) NSMutableDictionary peakReduceManager;
@property (nonatomic) BOOL waitForceRefresh;
@property (nonatomic) NSMutableArray waitForceRefreshData;
@property (nonatomic) BOOL hasPreloadedData;
@property (nonatomic) BOOL isPreloadCacheHit;
@property (nonatomic) IESECLiveGoodsListItemViewModel guideItem;
@property (nonatomic) BOOL goodsListViewOnShow;
@property (nonatomic) BOOL isExpiredAndMustRefresh;
@property (nonatomic) BOOL alreadyShowedData;
@property (nonatomic) BOOL hasToastCoinTask;
@property (nonatomic) NSMutableDictionary trackDictionary;
@property (nonatomic) IESECLiveGoodsListItemViewModel lastClickItem;
@property (nonatomic) BOOL isWaitingAfterCancelExplainMsg;
@property (nonatomic) IESECGCDTimer delayExecuteCancelExplainTimer;
@property (nonatomic) BOOL isExplainingSameProductRepeatedly;
@property (nonatomic) NSString curPageUniqueKey;
@property (nonatomic) IESECLiveGoodsListAnchorInfo goodsListAnchorInfo;
@property (nonatomic) <HTSKVStore> kvStore;
@property (nonatomic) NSArray services;
@property (nonatomic) <IESECLiveListViewModelDelegate> delegate;
@property (nonatomic) IESECLiveGoodsListClickContext clickContext;
@property (nonatomic) IESECLiveGoodsViewModel introducingGoodsViewModel;
@property (nonatomic) @ uiPage;
@property (nonatomic) q tabType;
@property (nonatomic) NSArray tabModels;
@property (nonatomic) q addressAlertShowedTimes;
@property (nonatomic) BOOL shouldShowAddressAlert;
@property (nonatomic) NSDictionary liveThemeColorDic;
@property (nonatomic) NSDictionary liveThemeFileDic;
@property (nonatomic) NSDictionary liveThemeFontSizeDic;
@property (nonatomic) NSDictionary liveThemeRadiusDic;
@property (nonatomic) NSDictionary listTabColorDic;
@property (nonatomic) NSDictionary trackDic;
@property (nonatomic) q selectedTabIndex;
@property (nonatomic) NSString emptyText;
@property (nonatomic) BOOL isCouponGoodsList;
@property (nonatomic) BOOL isSecondary;
@property (nonatomic) IESECLiveGoodsListBannerInfoModel commonBanner;
@property (nonatomic) IESECLiveListHeaderSearchBarInfo lastSearchBarInfo;
@property (nonatomic) NSString bottomText;
@property (nonatomic) NSString guideCategoryWord;
@property (nonatomic) BOOL shouldShowBottomGuideView;
@property (nonatomic) double bottomGuideHeight;
@property (nonatomic) q clickCountForBottomGuideView;
@property (nonatomic) BOOL isShowingBottomGuideView;
@property (nonatomic) IESECLiveListBottomGuideModel lastBottomGuideModel;
@property (nonatomic) IESECLiveDynamicRegionModel bottomDynamicRegionModel;
@property (nonatomic) BOOL bottomDynamicViewEverLoad;
@property (nonatomic) BOOL listOpenRegionContentEverLoad;
@property (nonatomic) BOOL isFusion;
@property (nonatomic) BOOL enterMergeShop;
@property (nonatomic) BOOL showAuthorConnect;
@property (nonatomic) BOOL showSliderAuthorConnect;
@property (nonatomic) q cartEnhanceStyle;
@property (nonatomic) q cartCount;
@property (nonatomic) BOOL useGoodsAddCartAnimation;
@property (nonatomic) BOOL useLargerAddCartAnimation;
@property (nonatomic) BOOL useRedCartIcon;
@property (nonatomic) BOOL useLargeCartIcon;
@property (nonatomic) BOOL useCartCountDot;
@property (nonatomic) BOOL vibeViewDisabled;
@property (nonatomic) BOOL forbidRefreshOnBack;
@property (nonatomic) IESECLiveListHeaderStyleControl headerStyleControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dataStore:appendGoodsListModel:;
- (void)excuteCartCount;
- (id)listMergeShopEntranceInfoParams;
- (void)qualityInfoInit;
- (void)setIsSecondary:;
- (void)setLiveContext:;
- (void)updateGuideInfoWithDict:bizKey:;
- (BOOL)useCartCountDot;
- (BOOL)enableListCache;
- (id)fetchParamsOfGoodsModelUpdater:;
- (id)listTabColorDic;
- (id)selectedSKUItem;
- (void)setLocalBanner:;
- (void)setQualityInfo:;
- (long long)tabType;
- (long long)totalGoodsCount;
- (id)trackDictionary;
- (void)addPitayaEventSubscriber;
- (long long)addressAlertShowedTimes;
- (id)allGoodsModelOnShow;
- (BOOL)alreadyShowedData;
- (id)basicTrackParams;
- (id)bottomDynamicRegionModel;
- (BOOL)bottomDynamicViewEverLoad;
- (double)bottomGuideHeight;
- (void)bottomGuideViewShowedTrack:;
- (void)bottomLabelShowedTrack;
- (id)campaignTimer;
- (void)cancelCampaignTimerIfNeeded;
- (void)cancelDelayExecuteCancelExplainTimerIfNeeded;
- (long long)cartCount;
- (long long)cartEnhanceStyle;
- (void)changeStore:completion:;
- (BOOL)checkGuideIfNeededWithKey:;
- (void)checkUpdateBrowseTaskTimer;
- (long long)clickCountForBottomGuideView;
- (void)closeListView;
- (id)commonBanner;
- (BOOL)curPageControlExistFirstPageData;
- (id)curPageUniqueKey;
- (void)dataStore:dealPageResponseWithOriginModel:;
- (void)dataStore:didUpdateGoodsListModel:;
- (void)dataStore:routeGoodsModelDidRefreshEvent:;
- (void)dataStore:routeGoodsModelDidUpdateEvent:;
- (void)dataStoreGoodsDidChange;
- (void)dataStoreOnGoodsChange:;
- (id)decreaseCampaignAndReturnExpiredProductIDs:;
- (void)decreaseSubsetGoodsCampaign:withSeconds:;
- (id)delayExecuteCancelExplainTimer;
- (void)didClickGoodsItem:;
- (void)didClickTabAtIndex:tabModel:;
- (void)didSelectSKUIDs:withGoodsModel:canSelect:;
- (void)didShowAddressAlert;
- (void)didShowTabAtIndex:tabModel:;
- (void)didTrackShowProductionWithPromotionID:;
- (void)disablePageDataWithUniqueKey:;
- (id)ecomEntranceForm;
- (id)emptyText;
- (BOOL)enableForceRefresh;
- (BOOL)enableLiveListAnchorAdapter;
- (BOOL)enterMergeShop;
- (void)executeWaitForceRefreshAction;
- (void)fetchGeckoInfoIfNeed;
- (void)fetchGoodsListWithRefreshInfo:option:;
- (id)fetchParams;
- (BOOL)forbidRefreshOnBack;
- (id)generateThemeKey;
- (id)getGoodsItemViewModelWithPromotionID:;
- (long long)getListBusinessType;
- (id)getLiteListThemeKey:;
- (id)getSingleGuideInfoWithKey:;
- (id)getSmartProductTrackDict;
- (id)goodsItemViewModelAtIndex:;
- (id)goodsItemViewModelOnShowWithPromotionID:;
- (id)goodsItemViewModelWithPromotionID:;
- (id)goodsListAnchorInfo;
- (BOOL)goodsListIsShowing;
- (BOOL)goodsListViewOnShow;
- (id)goodsModelToBeUpdatedOfGoodsModelUpdater:;
- (id)goodsModelsWithProductID:;
- (id)guideCategoryWord;
- (id)guideItem;
- (void)handleCampaignRefresh;
- (void)handleCampaignTimerIfNeeded;
- (BOOL)hasCampaign:;
- (BOOL)hasPreloadedData;
- (BOOL)hasToastCoinTask;
- (id)headerStyleControl;
- (unsigned long long)indexOfGoodsModelWithID:;
- (unsigned long long)indexOfGoodsModelWithPromotionID:;
- (id)indexPathsForProductIds:;
- (id)indexPathsForPromotionIds:;
- (id)initWithLiveContext:;
- (id)introducingGoodsViewModel;
- (BOOL)isCouponGoodsList;
- (BOOL)isExpiredAndMustRefresh;
- (BOOL)isExplainingSameProductRepeatedly;
- (BOOL)isFusion;
- (BOOL)isInstantStore;
- (BOOL)isInstantStoreShortBuyButton;
- (BOOL)isPreloadCacheHit;
- (BOOL)isShowingBottomGuideView;
- (BOOL)isWaitingAfterCancelExplainMsg;
- (id)itemViewModelFromGoodsViewModel:;
- (id)itemViewModelsFromGoodsViewModels:;
- (id)itemViewModelsOnShow;
- (id)lastBottomGuideModel;
- (id)lastClickItem;
- (id)lastExplainPromotionId;
- (id)lastSearchBarInfo;
- (id)listABConfigInfo;
- (id)listMergeShopGoodsTrackParams;
- (BOOL)listOpenRegionContentEverLoad;
- (id)liveContext;
- (void)liveGoodsListDidAppear;
- (void)liveGoodsListDidDisappear;
- (void)liveGoodsListDidScroll;
- (void)liveGoodsListDidScrolledToBottom:showTrackInfoArray:;
- (void)liveGoodsListDidShowItemAtIndex:;
- (void)liveGoodsListWillAppear;
- (void)liveGoodsListWillBeginDragging;
- (void)liveGoodsListWillDisappear;
- (id)liveThemeColorDic;
- (id)liveThemeFileDic;
- (id)liveThemeFontSizeDic;
- (id)liveThemeRadiusDic;
- (void)loadNextPageData;
- (void)loadPreviousPageData;
- (id)localBanner;
- (void)localTimerRefresh;
- (id)localTimerTaskUtils;
- (id)locateGoodsID;
- (BOOL)locateNonCustomTab;
- (void)messageReceived_IESECAuthorConnectMessage:;
- (void)messageReceived_IESECCategoryRefreshMessage:;
- (void)messageReceived_IESECLiveCommonMessage:;
- (void)messageReceived_IESECLiveInteractionMessage:;
- (void)messageReceived_IESECLiveMarketingMessage:;
- (void)messageReceived_IESECLivePopMessage:;
- (void)messageReceived_IESECProductListRefreshMessage:;
- (void)messageReceived_IESECProductListUpdateMessage:;
- (id)monitorParams;
- (void)monitorTrackWithParams:;
- (long long)numberOfOnShowItems;
- (void)openListViewWithParams:;
- (id)p_delegateAnchorInfo;
- (id)p_delegateGoodsAreaContentSize;
- (void)p_delegateLoadingType:updateToState:atTabIndex:;
- (void)p_delegateRefreshGoodsWithType:atIndexPaths:extraInfo:;
- (void)p_delegateRefreshWithRefreshInfo:error:;
- (void)p_delegateTrackBegin:cleanRecords:;
- (void)p_delegateUpdateBigLoadingType:atTabIndex:;
- (void)p_delegateUpdateBottomGuideWithUpdateType:extraInfo:;
- (void)p_delegateUpdateFooterLoadingType:atTabIndex:;
- (void)p_delegateUpdateGoodsAnchor:;
- (void)p_delegateUpdateGoodsWithType:atIndexPaths:extraInfo:;
- (void)p_delegateUpdateHeaderLoadingType:atTabIndex:;
- (void)p_delegateUpdateHeaderWithUpdateType:extraInfo:;
- (void)p_delegateUpdateListOnScene:updateType:error:;
- (void)p_delegateUpdateListPartWithType:error:;
- (void)p_delegateUpdateWithType:extraInfo:;
- (void)p_destroyConnectedDataIfNeeded;
- (void)p_didCallDelegateRefreshWithRefreshInfo:error:;
- (void)p_disableThenRenewTabDataWithUniqueKey:fetchParams:onScene:completion:;
- (BOOL)p_enableRefreshListMessage;
- (void)p_fetchGoodsList;
- (id)p_fetchParams;
- (id)p_listCacheFetchParams;
- (id)p_listEntranceInfoInjectParams;
- (BOOL)p_listExistEnableForceRefresh;
- (BOOL)p_listNotExistEnableForceRefresh;
- (void)p_listShowToast:;
- (void)p_loadNextPageDataWithRealIndex:realOrderInList:;
- (void)p_loadPreviousPageDataWithRealIndex:realOrderInList:;
- (id)p_recordKeyWithKey:;
- (void)p_refetchListDataOnAuthorDisconnectWithRefreshScene:;
- (void)p_renewListOnScene:fetchParams:callback:;
- (void)p_requestBottomGuideWithParams:completion:;
- (void)p_requestDataThenShowWithRefreshInfo:fetchParams:callback:;
- (void)p_requestHeaderSearchBarWithParams:completion:;
- (void)p_resetInfoToInitialStateForItems:;
- (void)p_trackTabItem:event:index:;
- (id)p_updateIntroducingStateForItems:currentIntroducingPromotionID:oldIntroducingPromotionID:;
- (void)p_updateListBottomViewIfNeeded;
- (void)p_updateTaskInfoWithMarketingMessage:;
- (void)p_updateTopVibeWithMsgData:;
- (void)p_updateTopVibeWithVibeModels:cancelCurrent:;
- (void)p_useCacheThenShowWithRefreshInfo:originFetchParams:;
- (void)p_willCallDelegateRefreshWithRefreshInfo:error:;
- (id)peakReduceForKey:;
- (id)peakReduceManager;
- (id)qualityInfo;
- (void)refreshListBanner;
- (id)registerMessageClasses;
- (void)reloadSKUInfoWithItems:;
- (id)replaceProgressBrowseTaskData;
- (void)requestTabDataWithTabIndex:;
- (void)resetLocalBanner;
- (void)saveListPerfDataForLigoWithParams:;
- (long long)searchButtonStyle;
- (id)searchSchema;
- (void)setAlreadyShowedData:;
- (void)setBottomDynamicRegionModel:;
- (void)setBottomDynamicViewEverLoad:;
- (void)setCampaignTimer:;
- (void)setCartCount:;
- (void)setCartEnhanceStyle:;
- (void)setClickCountForBottomGuideView:;
- (void)setCurPageUniqueKey:;
- (void)setDelayExecuteCancelExplainTimer:;
- (void)setForbidRefreshOnBack:;
- (void)setGoodsListAnchorInfo:;
- (void)setGoodsListViewOnShow:;
- (void)setGuideCategoryWord:;
- (void)setGuideItem:;
- (void)setHasPreloadedData:;
- (void)setHasToastCoinTask:;
- (void)setHeaderStyleControl:;
- (void)setIsExpiredAndMustRefresh:;
- (void)setIsExplainingSameProductRepeatedly:;
- (void)setIsFusion:;
- (void)setIsPreloadCacheHit:;
- (void)setIsShowingBottomGuideView:;
- (void)setIsWaitingAfterCancelExplainMsg:;
- (void)setItemViewModelsOnShow:;
- (void)setLastBottomGuideModel:;
- (void)setLastClickItem:;
- (void)setLastExplainPromotionId:;
- (void)setLastSearchBarInfo:;
- (void)setListModel:;
- (void)setListOpenRegionContentEverLoad:;
- (void)setListTabColorDic:;
- (void)setLiveThemeColorDic:;
- (void)setLiveThemeFileDic:;
- (void)setLiveThemeFontSizeDic:;
- (void)setLiveThemeRadiusDic:;
- (void)setLocalTimerTaskUtils:;
- (void)setPeakReduceManager:;
- (void)setSelectedSKUItem:;
- (void)setShouldShowBottomGuideView:;
- (void)setTabType:;
- (void)setTrackDictionary:;
- (void)setUiPage:;
- (void)setWaitForceRefresh:;
- (void)setWaitForceRefreshData:;
- (void)setupCampaignTimer;
- (void)setupGoodsViewModelData:withItemViewModel:;
- (void)setupLocalBanner;
- (void)setupServices;
- (BOOL)shouldShowAddressAlert;
- (BOOL)shouldShowAddressAlert;
- (BOOL)shouldShowBottomGuideView;
- (BOOL)shouldTrackShowProductWithPromotionID:;
- (BOOL)shouldUpdateBrowseTaskInfo;
- (BOOL)showAuthorConnect;
- (BOOL)showSliderAuthorConnect;
- (id)tabModels;
- (id)tabProductIDsAtTabIndex:;
- (void)taskReportCompleted;
- (void)taskReportFailed;
- (id)trackDic;
- (void)trackHaveSeenLabelShowWithParams:goodsModel:;
- (void)trackIntroducingChangeIfNeeded;
- (void)trackListShowDurationWithParams:;
- (void)trackListShowV2WithParams:;
- (void)trackListShowWithParams:;
- (void)trackListSmartProductShowWithParams:;
- (void)trackShowWithExtraInfo:;
- (id)uiPage;
- (void)updateBrowseTaskInfo;
- (void)updateGoodsListWithCartList:;
- (void)updateGoodsWithProductID:;
- (void)updateGoodsWithProductID:cartNum:;
- (void)updateGoodsWithType:atIndexPaths:extraInfo:;
- (void)updateLocalBanner;
- (void)updateReservationGoodsWithPromotionID:;
- (void)updateSkuSelectedInfo:forPromotionID:;
- (BOOL)useGoodsAddCartAnimation;
- (BOOL)useInstantStoreCartIcon;
- (BOOL)useLargeCartIcon;
- (BOOL)useLargerAddCartAnimation;
- (BOOL)useRedCartIcon;
- (BOOL)vibeViewDisabled;
- (BOOL)waitForceRefresh;
- (id)waitForceRefreshData;
- (void)setDataStore:;
- (id)dataStore;
- (void)setKvStore:;
- (id)kvStore;
- (void)setServices:;
- (void)setDelegate:;
- (void)prefetch;
- (id)listModel;
- (id)delegate;
- (void).cxx_destruct;
- (id)services;
- (void)messageReceived:;
- (id)bottomText;
- (BOOL)isSecondary;
- (id)clickContext;
- (void)registerServices;
- (long long)selectedTabIndex;
@end
