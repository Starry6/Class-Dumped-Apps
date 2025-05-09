@interface IESECLiveABManager : NSObject
+ (long long)cardControlType;
+ (BOOL)enableLiveAddCartAdaptCommonSKU;
+ (BOOL)enableLiveApiParamsVerifyHelper;
+ (BOOL)enableShowGoodsListVibeOptimize;
+ (id)passthroughExtraBusinessKeyList;
+ (BOOL)NAShortTouchCouponDisabled;
+ (BOOL)enableAnchorFlashCoverUseNewApi;
+ (BOOL)enableAppendEpisodeEntranceInfo;
+ (BOOL)enableListCache;
+ (BOOL)enableLiveAddCartAppendBCMChain;
+ (long long)listLowPriceGap;
+ (BOOL)abandonListLowPriceExplainingGoods;
+ (BOOL)cancelCardLottieAnimation;
+ (BOOL)cardAddCartUseTrackExtraDisabled;
+ (long long)deviceRateByLive;
+ (BOOL)disableLiveClearListDelegateAfterClose;
+ (BOOL)downgradeCardAnimationOnEnter;
+ (BOOL)ecLivePanelSizeOpt;
+ (id)ecomDegradeAnimationInfo;
+ (id)ecomLiveParamsKeyConfig;
+ (id)ecomLiveRegulatedEnterRoomSourceList;
+ (id)ecomLiveSplicingParamsConfig;
+ (id)ecomLiveThemeConfigDic;
+ (id)ecomSceneAllowList;
+ (BOOL)enableAnimDegradeByEcom;
+ (BOOL)enableCardPreload;
+ (BOOL)enableCartConfigFetch;
+ (BOOL)enableCartDegradeAnim;
+ (BOOL)enableCartNormalAnimOnEnter;
+ (BOOL)enableCartPrettyAnimation;
+ (BOOL)enableCartRedDot;
+ (BOOL)enableChangeLiveStackContainerView;
+ (BOOL)enableClearAnimationWhenHalfScreen;
+ (BOOL)enableCommonNetworkReport;
+ (BOOL)enableCouponApplyOpt;
+ (BOOL)enableDegradeAnimationByEcommerce;
+ (BOOL)enableDegradeAnimationByLive;
+ (BOOL)enableEComHighPriority;
+ (BOOL)enableEnhancedSearchEntry;
+ (BOOL)enableFakeCardData;
+ (BOOL)enableFeatureByClientToServer;
+ (BOOL)enableFindSimilar;
+ (BOOL)enableGoodsListEnterSKUAddCreativeID;
+ (BOOL)enableGoodsModelUpdateV1;
+ (BOOL)enableGoodsModelUpdateV2;
+ (BOOL)enableHourBuyAlwaysAlertNoAddress;
+ (BOOL)enableInstantListAddCartAdaptCommonSKU;
+ (BOOL)enableJumpHandlerOptimize;
+ (BOOL)enableLCEDegradeAnim;
+ (BOOL)enableListCellLongPressV2;
+ (BOOL)enableListCellLongPressV3;
+ (BOOL)enableListLoopFetchWhenPageGoodsEmpty;
+ (BOOL)enableListLowPrice;
+ (BOOL)enableListNetworkReport;
+ (BOOL)enableListViewReuse;
+ (BOOL)enableLiveAPIChange;
+ (BOOL)enableLiveAnchorAPIMigarate;
+ (BOOL)enableLiveAnchorFlashItemValid;
+ (BOOL)enableLiveCreateFlashPropertiesAdapter;
+ (BOOL)enableLiveGoodsRelatedInfo;
+ (BOOL)enableLiveListAnchorAdapter;
+ (BOOL)enableLiveListBottomViewHeightChange;
+ (BOOL)enableLiveListPtyLowPrice;
+ (BOOL)enableLiveListShowBackIcon;
+ (BOOL)enableLiveListTabAdaptiOS17;
+ (BOOL)enableLiveListTabBackTop;
+ (BOOL)enableLiveNonePopCardAdapter;
+ (BOOL)enableLivePopRequestFix;
+ (BOOL)enableLiveSplicingParams;
+ (BOOL)enableLiveUseEntranceInfoSDK;
+ (BOOL)enableLynxCouponCard;
+ (BOOL)enableNewCouponAPI;
+ (BOOL)enableOptListViewOnShowFlagUpdate;
+ (BOOL)enableOptimizeListCardCycleUse;
+ (BOOL)enablePreEnterLive;
+ (BOOL)enablePriceApiRemoval;
+ (BOOL)enableProductTagTrack;
+ (BOOL)enablePromotionListFPSPerf;
+ (BOOL)enablePromotionOptRoutine;
+ (BOOL)enableRedirectApiPath;
+ (BOOL)enableRemoveLazyLoadEntranceInfo;
+ (BOOL)enableRenderOptimize;
+ (BOOL)enableReplay;
+ (BOOL)enableReplayPreload;
+ (BOOL)enableReplayUseOriginEcomSceneID;
+ (BOOL)enableRequestInteraction;
+ (BOOL)enableRoutineReverseStep;
+ (BOOL)enableSKUEntranceInfoAddLinkMicParams;
+ (BOOL)enableSearchListFindSimilar;
+ (BOOL)enableServerABOpt;
+ (BOOL)enableShopCartMonitor;
+ (BOOL)enableUpdateGoodsListPassthroughParams;
+ (BOOL)enableUseAtomicAbilityV2;
+ (BOOL)enableUseBSTV2;
+ (BOOL)enableUseCartAddAnimAtomic;
+ (BOOL)enableUsePromotionCard;
+ (BOOL)enableiPadGoodsListOptimize;
+ (id)featureByClientToServerConfig;
+ (id)featureByClientToServerProducerConfig;
+ (id)featureByClientToServerTriggerConfig;
+ (id)findSimilarConfigInfo;
+ (id)forceLoginCheckAPIList;
+ (long long)getLinkMicPopCardViewExplainTime;
+ (id)goodsCardShowTimePredictConfig;
+ (BOOL)goodsListBottomGuideAllowRequest;
+ (long long)goodsListBottomGuideWordRefreshCount;
+ (id)goodsListDataSmartPrefetchConfig;
+ (long long)goodsListFindSameType;
+ (long long)listBackIconShowCount;
+ (id)listCacheExpireTime;
+ (id)listCategoryBubbleContent;
+ (long long)listCategoryBubbleDuration;
+ (id)listCellLongPressGuideUrl;
+ (id)listExplainMsgOptConfig;
+ (double)listGoodsCardContentMargin;
+ (double)listGoodsCellHeight;
+ (double)listGoodsImageHeight;
+ (BOOL)listGoodsTitleUseTwoLines;
+ (id)listGuideInfo;
+ (id)listHeaderLayoutConfig;
+ (long long)listPageCount;
+ (id)listRecommendedABTag;
+ (BOOL)liveListAddOpenPanel;
+ (id)liveListTabDesignConfig;
+ (id)liveListTabReorderConfig;
+ (id)livePanelHeightPercent;
+ (long long)liveSmartProductControl;
+ (id)liveSmartProductLimit;
+ (id)liveSmartProductShowCount;
+ (id)liveSmartProductShowDuration;
+ (BOOL)liveSmartProductShowIndex;
+ (double)looptimeOfShopCart;
+ (long long)lowPriceAutoShowIndex;
+ (double)lynxCouponCardDelay;
+ (id)megaObjectKeys;
+ (id)newLiveAnchorListScheme;
+ (long long)noFilterNoticeShowTimes;
+ (id)notFixExtraBusinessParamsSourceList;
+ (id)notRemoveSensitiveParamsSourceList;
+ (BOOL)optGoodsListLayout;
+ (id)orderPrefetchConfig;
+ (id)orderPrefetchKey;
+ (id)orderSmartPrefetchConfig;
+ (id)passthroughBlockKeyList;
+ (id)popCardShowAutomaticConfig;
+ (id)popCardUseNewPrice;
+ (long long)preloadLeftCount;
+ (BOOL)removeLiveCommonSKUApi;
+ (long long)replayCustomPageOpt;
+ (id)shopCartMonitorRules;
@end
