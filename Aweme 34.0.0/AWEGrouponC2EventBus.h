@interface AWEGrouponC2EventBus : NSObject
@property (nonatomic) q pageType;
@property (nonatomic) NSNumber showXtab;
@property (nonatomic) NSNumber isDual;
@property (nonatomic) NSNumber enableSearch;
@property (nonatomic) NSNumber isFeedRequestAir;
@property (nonatomic) BOOL isFeedPreInitRequestAir;
@property (nonatomic) NSNumber isShowingAlert;
@property (nonatomic) NSNumber isFirstReqFinsh;
@property (nonatomic) NSNumber firstEnterNearbyC2Time;
@property (nonatomic) NSNumber firstFetch;
@property (nonatomic) q dualCoverLoadNum;
@property (nonatomic) BOOL isFirstFeedFinish;
@property (nonatomic) BOOL needForceRefreshFeed;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (nonatomic) BOOL isSwitchBtnGuideShowing;
@property (nonatomic) NSString grouponSessionId;
@property (nonatomic) NSString freshSessionId;
@property (nonatomic) NSString homepageLifeEnterId;
@property (nonatomic) NSDictionary grouponTabEnterIdDic;
@property (nonatomic) NSString feedListId;
@property (nonatomic) BOOL isNearbyEnterBubbleShowing;
@property (nonatomic) q grouponOutCellShowToday;
@property (nonatomic) q grouponOutCellShow;
@property (nonatomic) q grouponInnerCellShowToday;
@property (nonatomic) q grouponInnerCellShow;
@property (nonatomic) BOOL hasForwardClickEvent;
@property (nonatomic) NSString forwardClickPosition;
@property (nonatomic) BOOL repeatDidAppear;
@property (nonatomic) BOOL isSwipeUpGuideViewShowing;
@property (nonatomic) BOOL isLynxDialogShowing;
@property (nonatomic) BOOL forwardPageShowing;
@property (nonatomic) BOOL isCommonDialogShowing;
@property (nonatomic) BOOL isGrouponPageVisible;
@property (nonatomic) BOOL isAutoRefresh;
@property (nonatomic) BOOL needAutoScroll;
@property (nonatomic) BOOL isManualScroll;
@property (nonatomic) BOOL autoScrollEnd;
@property (nonatomic) BOOL hasOpenSubPage;
@property (nonatomic) BOOL isUtilAreaShow;
@property (nonatomic) BOOL useTaskServiceToImplFeat;
@property (nonatomic) BOOL hasMultipleTabBar;
@property (nonatomic) BOOL isGrouponCacheShowing;
@property (nonatomic) BOOL hasBeenUsedCache;
@property (nonatomic) BOOL isToolBarMorePanelShowing;
@property (nonatomic) double enterTabTimeStamp;
@property (nonatomic) double lastTouchTimeStamp;
@property (nonatomic) NSDictionary dualSearchBarSetting;
@property (nonatomic) BOOL isTransformerOnAir;
@property (nonatomic) AWEGrouponHalfScreenPerfConfig halfScreenPerfConfig;
@property (nonatomic) UIView searchView;
@property (nonatomic) BOOL feedUpdateEnable;
@property (nonatomic) q grouponMultiTabSelectedTabId;
@property (nonatomic) BOOL isInGroupPurchaseTabScope;
@property (nonatomic) NSString topContainerData;
@property (nonatomic) q lastNearbySettingsReqType;
@property (nonatomic) NSString currentLocationCity;
@property (nonatomic) AWEGrouponWidgetModel widgetModel;
@property (nonatomic) AWEGrouponActivityModel activityModel;
@property (nonatomic) Q settingsRefreshType;
@property (nonatomic) BOOL isTopBarLightWithActivity;
@property (nonatomic) BOOL isXtabFullScreenStatus;
@property (nonatomic) AWEAwemeModel c2FeedSelectAweme;
@property (nonatomic) BOOL isFeedScrollTopping;
@property (nonatomic) BOOL isC2Scrolling;
@property (nonatomic) AWEAwemeModel lastGrouponOutShowAweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enableSearch;
- (BOOL)isHalfScreenShowing;
- (void)updateHasOpenSubPage:;
- (id)isDual;
- (void)setIsDual:;
- (id)activityModel;
- (void)setActivityModel:;
- (void)setIsHalfScreenShowing:;
- (void)updateActivityModel:;
- (void)setIsManualScroll:;
- (BOOL)isManualScroll;
- (void)setEnableSearch:;
- (id)grouponSessionId;
- (id)freshSessionId;
- (id)feedListId;
- (void)updateHasForwardClickEvent:;
- (void)setLastGrouponOutShowAweme:;
- (void)recordGrouponOutCellShow;
- (void)updateLastTouchTimeStamp:;
- (void)updateIsisAutoRefresh:;
- (id)halfScreenPerfConfig;
- (BOOL)isFeedScrollTopping;
- (id)isFeedRequestAir;
- (id)dualSearchBarSetting;
- (void)updateDualSearchBarSetting:;
- (void)updateIsGrouponCacheShowing:;
- (void)updateHasBeenUsedCache:;
- (void)updateCurrentLocationCity:;
- (BOOL)isToolBarMorePanelShowing;
- (void)updateIsInGroupPurchaseTabScope:;
- (BOOL)isCommonDialogShowing;
- (void)updateCommonDialogShowStatus:;
- (BOOL)feedUpdateEnable;
- (void)updateGrouponSessionId:;
- (void)updateFreshSessionId:;
- (void)updateFeedListId:;
- (void)updateUseTaskServiceToImplFeat:;
- (void)updateShowXtab:;
- (void)setIsTopBarLightWithActivity:;
- (void)updateRepeatDidAppear:;
- (BOOL)hasOpenSubPage;
- (void)updateIsGrouponPageVisible:;
- (void)updateFirstEnterNearbyTime:;
- (BOOL)needForceRefreshFeed;
- (void)updateNeedForceRefreshFeed:;
- (void)updateC2SearchView:;
- (void)updateIsFirstReqFinsh:;
- (BOOL)isInGroupPurchaseTabScope;
- (BOOL)hasMultipleTabBar;
- (void)updateIsTopBarLightWithActivity:;
- (void)updateIsManualScroll:;
- (BOOL)isTopBarLightWithActivity;
- (void)updateNeedAutoScroll:;
- (id)grouponTabEnterIdDic;
- (void)updateAutoScrollEnd:;
- (id)showXtab;
- (void)updateSwipeUpGuideViewShowStatus:;
- (BOOL)isSwipeUpGuideViewShowing;
- (BOOL)hasBeenUsedCache;
- (BOOL)isGrouponCacheShowing;
- (BOOL)isFeedPreInitRequestAir;
- (id)currentLocationCity;
- (void)updateLastNearbySettingsReqType:;
- (id)topContainerData;
- (void)updateTopContainerData:;
- (void)setIsC2Scrolling:;
- (BOOL)isFirstFeedFinish;
- (void)updateIsShowingAlert:;
- (id)isFirstReqFinsh;
- (void)updateHalfScreenPerfConfig:;
- (void)updateFeedScrollTopping:;
- (void)setShowXtab:;
- (void)setIsFeedRequestAir:;
- (void)setIsFeedPreInitRequestAir:;
- (void)setIsFirstReqFinsh:;
- (void)setFirstEnterNearbyC2Time:;
- (void)setIsFirstFeedFinish:;
- (void)setNeedForceRefreshFeed:;
- (void)setIsSwitchBtnGuideShowing:;
- (void)setGrouponSessionId:;
- (void)setHomepageLifeEnterId:;
- (void)setGrouponTabEnterIdDic:;
- (void)setFreshSessionId:;
- (void)setFeedListId:;
- (void)setIsNearbyEnterBubbleShowing:;
- (void)setIsSwipeUpGuideViewShowing:;
- (void)setIsLynxDialogShowing:;
- (void)setHasMultipleTabBar:;
- (void)setIsToolBarMorePanelShowing:;
- (void)setEnterTabTimeStamp:;
- (void)setLastTouchTimeStamp:;
- (void)setForwardPageShowing:;
- (void)setIsCommonDialogShowing:;
- (void)setNeedAutoScroll:;
- (void)setAutoScrollEnd:;
- (void)setHasOpenSubPage:;
- (void)setIsUtilAreaShow:;
- (long long)dualCoverLoadNum;
- (void)setDualCoverLoadNum:;
- (void)setIsXtabFullScreenStatus:;
- (void)setRepeatDidAppear:;
- (void)setForwardClickPosition:;
- (void)setIsGrouponPageVisible:;
- (void)setIsAutoRefresh:;
- (void)setIsGrouponCacheShowing:;
- (void)setHasBeenUsedCache:;
- (void)setGrouponMultiTabSelectedTabId:;
- (void)setIsInGroupPurchaseTabScope:;
- (void)setTopContainerData:;
- (void)setLastNearbySettingsReqType:;
- (void)setCurrentLocationCity:;
- (void)setC2FeedSelectAweme:;
- (void)setSettingsRefreshType:;
- (void)setUseTaskServiceToImplFeat:;
- (void)setDualSearchBarSetting:;
- (void)setIsTransformerOnAir:;
- (void)setHalfScreenPerfConfig:;
- (void)setFeedUpdateEnable:;
- (long long)grouponOutCellShow;
- (void)setGrouponOutCellShow:;
- (id)outCellShowTodayRecordKey;
- (void)setGrouponOutCellShowToday:;
- (long long)grouponInnerCellShow;
- (void)setGrouponInnerCellShow:;
- (id)innerCellShowTodayRecordKey;
- (void)setGrouponInnerCellShowToday:;
- (void)setIsFeedScrollTopping:;
- (void)updateIsDual:;
- (void)updateEnableSearch:;
- (void)updateIsFeedRequestAir:;
- (void)updateIsFeedPreInitRequestAir:;
- (void)updateFirstFetch:;
- (void)updateisFirstFeedFinish:;
- (void)updateHalfScreenShowStatus:;
- (void)updateisSwitchBtnGuideShowing:;
- (void)updateHomepageLifeEnterId:;
- (void)updateEnterBubbleShowStatus:;
- (void)updateLynxDialogShowStatus:;
- (void)updateForwardPageShowing:;
- (void)updateIsUtilAreaShow:;
- (void)updateHasMultipleTabBar:;
- (void)updateIsToolBarMorePanelShowing:;
- (void)updateEnterTabTimeStamp:;
- (void)recordGrouponInnerCellShow:;
- (void)recordDualCoverLoadFinish;
- (void)updategrouponMultiTabSelectedTabId:;
- (void)updateIsXtabFullScreenStatus:;
- (void)updateC2FeedSelectAweme:;
- (void)updateSettingsRefreshType:;
- (void)updateIsTransformerOnAir:;
- (void)updateFeedUpdateEnable:;
- (id)firstEnterNearbyC2Time;
- (BOOL)isC2Scrolling;
- (BOOL)isSwitchBtnGuideShowing;
- (id)homepageLifeEnterId;
- (BOOL)isNearbyEnterBubbleShowing;
- (id)forwardClickPosition;
- (BOOL)repeatDidAppear;
- (BOOL)isLynxDialogShowing;
- (BOOL)forwardPageShowing;
- (BOOL)isGrouponPageVisible;
- (BOOL)isAutoRefresh;
- (BOOL)needAutoScroll;
- (BOOL)autoScrollEnd;
- (BOOL)isUtilAreaShow;
- (BOOL)useTaskServiceToImplFeat;
- (BOOL)isTransformerOnAir;
- (double)enterTabTimeStamp;
- (double)lastTouchTimeStamp;
- (long long)grouponOutCellShowToday;
- (long long)grouponInnerCellShowToday;
- (id)lastGrouponOutShowAweme;
- (long long)grouponMultiTabSelectedTabId;
- (long long)lastNearbySettingsReqType;
- (id)widgetModel;
- (unsigned long long)settingsRefreshType;
- (BOOL)isXtabFullScreenStatus;
- (id)c2FeedSelectAweme;
- (void)updateHomepageGrouponTabEnterIdDic:;
- (void)setWidgetModel:;
- (BOOL)hasForwardClickEvent;
- (void)setHasForwardClickEvent:;
- (void)setPageType:;
- (void).cxx_destruct;
- (long long)pageType;
- (id)firstFetch;
- (void)setFirstFetch:;
- (id)isShowingAlert;
- (void)setIsShowingAlert:;
- (id)searchView;
- (void)setSearchView:;
+ (id)sharedInstanceWithPageType:;
@end
