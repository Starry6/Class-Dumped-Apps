@interface AWEFriendsYellowDotManager : NSObject
@property (nonatomic) NSMutableArray awemePlayedArray;
@property (nonatomic) q modelCount;
@property (nonatomic) NSString yellowDotRequestId;
@property (nonatomic) double yellowDotShowTime;
@property (nonatomic) NSString familiarYellowDotType;
@property (nonatomic) double familiarYellowDotStart;
@property (nonatomic) double familiarYellowDotEnd;
@property (nonatomic) q familiarTabNumberDotShowingCount;
@property (nonatomic) q reduceCountWhenLargerThan99;
@property (nonatomic) BOOL hasNewDataInHotLanuchOrLongLink;
@property (nonatomic) Q yellowDotResultPullType;
@property (nonatomic) BOOL isYellowNumAvatarEnable;
@property (nonatomic) AFDYellowNumAvatarInfoModel yellowNumAvatarInfo;
@property (nonatomic) NSMutableArray yellowNumAvatarListInfo;
@property (nonatomic) AFDYellowNumMultiAvatarContext yellowMultiAvatarContext;
@property (nonatomic) q currentShowYellowNumAvatarIndex;
@property (nonatomic) BOOL shouldNotClickAvatarRequestSocialCount;
@property (nonatomic) AFDYellowNumAvatarInfoModel currentShowYellowNumAvatarInfo;
@property (nonatomic) NSDate lastShowYellowAvatarViewDate;
@property (nonatomic) Q countType;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) Q preFriendsUnreadCount;
@property (nonatomic) BOOL isShowingUnreadBubble;
@property (nonatomic) AFDFriendsRequestManager friendsRequestManager;
@property (nonatomic) <AWEIMSettingManagerProtocol> settingManager;
@property (nonatomic) AWEFamiliarDoubleTabManager doubleTabManager;
@property (nonatomic) AWEBinding familiarCountKVO;
@property (nonatomic) AWEBinding onboardingTextDotCountKVO;
@property (nonatomic) AWEBinding friendsRequestDotCountKVO;
@property (nonatomic) AWEBinding yellowDotSwitchKVO;
@property (nonatomic) <AFDFamiliarHomePageDelegate> homepageDelegate;
@property (nonatomic) AFDYellowDotStatusModel dotStatusModel;
@property (nonatomic) BOOL isUnreadBadgeShowing;
@property (nonatomic) NSArray familiarAwemeArray;
@property (nonatomic) NSArray feedFirstAwemeArray;
@property (nonatomic) q imChatUnreadCount;
@property (nonatomic) NSString familiarCountContext;
@property (nonatomic) q familiarCount;
@property (nonatomic) q closeFriendsCount;
@property (nonatomic) NSDictionary yellowDotMonitorParams;
@property (nonatomic) BOOL isShowDefaultYellowDot;
@property (nonatomic) q fastSlideConcernVideoCount;
@property (nonatomic) q fastSlideTipOneSessionShowCount;
@property (nonatomic) NSDate lastFastSlideTipShowDate;
@property (nonatomic) BOOL shouldClearFastSlideShowTimer;
@property (nonatomic) Q currentYellowDotStyle;
@property (nonatomic) BOOL isShowingNumberDot;
@property (nonatomic) BOOL isShowingReduceCountDot;
@property (nonatomic) BOOL shouldClearUnreadCountOnNextReadCount;
@property (nonatomic) NSMutableSet filteredFriendsVideoFromOtherPages;
@property (nonatomic) NSSet filteredFriendsVideoForLog;
@property (nonatomic) BOOL isShowingYellowDotWhenEnterFamiliarView;
@property (nonatomic) BOOL disableInteractMessageBubbleAlert;
@property (nonatomic) BOOL enterHomepageFamiliarWhenChatBubbleShowing;
@property (nonatomic) BOOL ignoreNextYellowDotShowEvent;
@property (nonatomic) q familiarHistoryTypeValue;
@property (nonatomic) BOOL shouldClearProfileRecommendDotInLinkage;
@property (nonatomic) NSString yellowDotRequestLogIdInPreviousLifeTime;
@property (nonatomic) q yellowDotCountInPreviousLifeTime;
@property (nonatomic) Q yellowDotPullTypeInPreviousLifeTime;
@property (nonatomic) Q sourceType;
@property (nonatomic) q countFetchType;
@property (nonatomic) q yellowDotNum;
@property (nonatomic) BOOL dontTrackShowForCloseFriend;
@property (nonatomic) BOOL isShowYellowAvatarView;
@property (nonatomic) AFDYellowNumAvatarInfoModel friendsTabAvatarInfo;
@property (nonatomic) BOOL isYellowDotClearByClickTab;
@property (nonatomic) NSDate lastValidEnterFamiliarDate;
@property (nonatomic) BOOL isEnterFamiliarValid;
@property (nonatomic) BOOL isEnterFamiliarHasYellowDot;
@property (nonatomic) NSMutableArray alreadyShownFriendsAvatarList;
@property (nonatomic) NSDate lastEnterOrExitFamiliarDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q friendTabTotalDotShowingCount;
- (BOOL)isColdLaunch;
- (void)didFinishLogoutWithUid:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishUnHidePostFromHer:status:;
- (void)didFinishTapTAIsFriendWithUser:isFriend:;
- (void)didFinishRemoveFansWithUser:;
- (id)friendsRequestManager;
- (id)lastShowYellowAvatarViewDate;
- (id)lastValidEnterFamiliarDate;
- (void)reduceYellowCountFromFriendVideo:andAwemeModel:;
- (long long)friendsRequestCount;
- (long long)familiarCount;
- (void)readFamiliarCountWithExtraInfo:;
- (void)readFamiliarCount;
- (void)trackForFmiliarYellowDotMonitorWithMethod:toPage:;
- (void)teenModeDidChange:isLogout:;
- (void)setIsColdLaunch:;
- (void)hideBubbleWithCompletion:;
- (void)tabBarDidChangeNotification:;
- (void)setFamiliarCount:;
- (void)p_observeMateStatus;
- (void)p_updateMateRelation:;
- (void)addFriendsTabRebrandWithParams:;
- (unsigned long long)switchYellowDotPullType2TotalTypeIfNeedWithSourceType:;
- (BOOL)isHitFamiliarMultiAvatarEnable;
- (id)alreadyShownFriendsAvatarList;
- (BOOL)enableRequestSocialCount;
- (unsigned long long)pullTypeForSupplementYellowDot:;
- (void)addFriendsTabServerNeedsWithParams:;
- (void)recordYellowDotRequestId:;
- (BOOL)badgeNumberContainsFriendsRequest;
- (long long)closeFriendsCount;
- (id)doubleTabManager;
- (void)clearFriendsRequestAllData;
- (BOOL)isShowingYellowDotWhenEnterFamiliarView;
- (BOOL)enableFriendsTabRebrand;
- (void)setDoubleTabManager:;
- (id)homepageDelegate;
- (void)recordYellowDotMonitorParamsWithDic:;
- (void)trackForFmiliarYellowDotMonitorWithMethod:;
- (void)resetColdLaunchedForYellowDot;
- (long long)familiarCountReducedCount;
- (BOOL)isShowYellowAvatarView;
- (BOOL)isShowingUnreadBubble;
- (BOOL)isShowingNumberDot;
- (unsigned long long)currentYellowDotStyle;
- (BOOL)isShowDefaultYellowDot;
- (long long)friendTabTotalDotShowingCount;
- (BOOL)isUnreadBadgeShowing;
- (long long)familiarCountReducedCountWithout99Limit;
- (void)trackFriendsYellowDotWithType:andNoticeType:;
- (void)tryTrackNewFriendYellowDotWithActionType:withComponentID:withExtraInfo:;
- (void)trackYellowAvatarViewWithType:;
- (void)friendsTabDidDeselect;
- (id)lastEnterOrExitFamiliarDate;
- (BOOL)disableInteractMessageBubbleAlert;
- (long long)imChatUnreadCount;
- (void)setIsShowingYellowDotWhenEnterFamiliarView:;
- (unsigned long long)yellowDotResultPullType;
- (id)familiarAwemeArray;
- (id)yellowDotRequestLogId;
- (id)familiarCountContext;
- (void)setFamiliarCountContext:;
- (void)tryPostInfoBetweenTopAndBottomTabWithExtraInfo:;
- (void)unbindObserverOnTopTab;
- (void)setHomepageDelegate:;
- (id)currentShowYellowNumAvatarInfo;
- (BOOL)enterHomepageFamiliarWhenChatBubbleShowing;
- (double)lastShowDateCurrentDateDiff;
- (BOOL)isYellowNumAvatarEnable;
- (void)addLeadingVideosIfNeeded:isAvartarAwemeInsert:;
- (BOOL)isYellowDotClearByClickTab;
- (void)setIsYellowDotClearByClickTab:;
- (id)customAccessibilityLabelText;
- (void)showFriendsYellowDotAsyncWithCompletion:;
- (void)setIsUnreadBadgeShowing:;
- (void)setIsShowingNumberDot:;
- (void)hideFriendsYellowDotWithExtraInfo:;
- (BOOL)hasNewDataInHotLanuchOrLongLink;
- (id)tabbarCurrentPage;
- (void)setEnterHomepageFamiliarWhenChatBubbleShowing:;
- (id)familiarYellowDotAwemeList;
- (long long)yellowDotShowClickInterval;
- (id)filteredFriendsVideoForLog;
- (long long)yellowDotCountInPreviousLifeTime;
- (id)yellowDotRequestLogIdInPreviousLifeTime;
- (long long)familiarHistoryTypeValue;
- (void)setupObserverOnTopTab;
- (void)setIsShowYellowAvatarView:;
- (long long)yellowDotNum;
- (id)remainYellowList;
- (void)configFeedFirstFetch:;
- (void)setIsEnterFamiliarValid:;
- (void)deduplicateAwemes:;
- (void)tryChangeYellowNumAvatar;
- (id)dotStatusModel;
- (long long)handleShowingCount:;
- (void)setReduceCountWhenLargerThan99:;
- (void)configYellowDotWithInfo:;
- (void)p_awemeDeduplication;
- (void)p_awemeRecentGidListDeduplication;
- (void)setHasColdLaunchedForYellowDotIfNeededWithIsColdLaunch:;
- (void)setHasNewDataInHotLanuchOrLongLink:;
- (long long)newFamiliarCountBeforeSetFamiliarCount:;
- (void)clearBeforeUpdateWithCurrentCountType:;
- (void)setFamiliarAwemeArray:;
- (void)setYellowDotResultPullType:;
- (BOOL)familiarMultiAvatarEnable;
- (id)p_getYellowNumAvatarInfosOfType:withInfo:;
- (void)configYellowNumAvatarListInfo:;
- (id)yellowNumAvatarInfo;
- (void)setYellowNumAvatarInfo:;
- (void)setShouldNotClickAvatarRequestSocialCount:;
- (id)yellowNumAvatarListInfo;
- (void)setYellowNumAvatarListInfo:;
- (void)trimFriendsAvatarInfo:;
- (id)yellowMultiAvatarContext;
- (void)p_startYellowNumAvatarChangeTimerIfNeeded;
- (void)hideAvatarUnreadWithReason:isUpdateAvatarInfo:;
- (BOOL)shouldNotClickAvatarRequestSocialCount;
- (void)startYellowNumAvatarChangeTimer;
- (void)setHasColdLaunchedForYellowDot;
- (void)setIsShowDefaultYellowDot:;
- (void)setModelCount:;
- (void)setCountFetchType:;
- (long long)countFetchType;
- (void)setFeedFirstAwemeArray:;
- (id)feedFirstAwemeArray;
- (id)awemePlayedArray;
- (BOOL)isHitAvatarRedDotExitRule;
- (void)setCurrentYellowDotStyle:;
- (id)componentIDWithYellowDotStyle:;
- (void)tryShowAvatar;
- (void)showUnreadDotWithCount:componentID:entranceAnimationType:completion:;
- (void)showUnreadDotWithComponentID:completion:;
- (void)showUnreadBubbleByABTestWithComponentID:completion:;
- (void)showOnboardingTextDotWithComponentID:completion:;
- (void)setDisableInteractMessageBubbleAlert:;
- (id)filteredFriendsVideoFromOtherPages;
- (void)setFilteredFriendsVideoForLog:;
- (void)setShouldClearUnreadCountOnNextReadCount:;
- (void)hideAvatarWithAnimation:reason:extraInfo:isUpdateAvatarInfo:;
- (long long)fastSlideConcernVideoCount;
- (void)setFastSlideConcernVideoCount:;
- (long long)fastSlideTipOneSessionShowCount;
- (void)setFastSlideTipOneSessionShowCount:;
- (void)setLastFastSlideTipShowDate:;
- (void)setShouldClearFastSlideShowTimer:;
- (void)clearFastSlideConcernVideoCount;
- (void)clearFastSlideTipOneSessionShowCount;
- (id)lastFastSlideTipShowDate;
- (BOOL)isShowBubbleAvailable;
- (void)setYellowDotMonitorParams:;
- (void)clearAvatarRedDotLastDate;
- (void)setLastEnterOrExitFamiliarDate:;
- (BOOL)isEnterFamiliarHasYellowDot;
- (void)setIsEnterFamiliarHasYellowDot:;
- (void)resetYellowDotPullTypeWhenEnterFamiliar;
- (void)clearYellowNumAvatarListInfo;
- (double)yellowDotShowTime;
- (void)setYellowDotRequestId:;
- (id)yellowDotRequestId;
- (void)reduceFamiliarCount;
- (void)hideAvatarUnreadWithReason:isUpdateAvatarInfo:withExtraInfo:;
- (id)deduplicateRecentGidList;
- (void)setIsShowingReduceCountDot:;
- (BOOL)shouldShowYellowDotShowingCountMaxThreshold;
- (BOOL)isShowingReduceCountDot;
- (void)setFamiliarTabNumberDotShowingCount:;
- (void)splashDidDisappear;
- (BOOL)isHitDefaultTypeRedDotFromServer;
- (BOOL)isHitNumberTypeRedDotFromServer;
- (void)actionAvatarViewSuspendTypeEnterBGIfNeed;
- (void)setFamiliarYellowDotStart:;
- (void)setFamiliarYellowDotType:;
- (double)familiarYellowDotStart;
- (void)setFamiliarYellowDotEnd:;
- (double)familiarYellowDotEnd;
- (id)familiarYellowDotType;
- (void)setYellowDotShowTime:;
- (id)yellowDotMonitorParams;
- (unsigned long long)yellowDotPullType;
- (void)setYellowDotPullType:;
- (BOOL)isYellowAvatarUpdateEnabled;
- (void)showYellowNumAvatar:onlyUpdateInfo:;
- (BOOL)shouldShowYellowNumAvatar;
- (void)tryNotClickAvatarRequestSocialCount;
- (long long)familiarMultiAvatarChangeTimeInterval;
- (long long)familiarMultiAvatarNoClickTimeInterval;
- (void)yellowNumAvatarNoClickTimeIntervalHandle;
- (void)hideAvatarCompletionTryUpdateAvatarInfo;
- (long long)currentShowYellowNumAvatarIndex;
- (void)tryShowAvatarOnTopTab;
- (void)tryShowYellowNumAvatarIfNeed;
- (long long)yellowDotSourceTypeReason;
- (BOOL)shouldForbidAvatarShowWithInfo:;
- (void)tryPreloadAvatarAwemeWithInfo:;
- (void)setCurrentShowYellowNumAvatarInfo:;
- (void)showYellowAvatarViewWithAvatar:;
- (void)setLastShowYellowAvatarViewDate:;
- (void)p_hideUnreadBadgeWhenHideAvatarIfNeeded:;
- (void)actionAvatarViewSuspend;
- (id)yellowAvatarItemID;
- (id)yellowAvatarFamiliarCountContext;
- (void)hideUnreadBadgeWithReason:;
- (void)setFamiliarCountKVO:;
- (id)familiarCountKVO;
- (void)setOnboardingTextDotCountKVO:;
- (id)onboardingTextDotCountKVO;
- (void)setFriendsRequestDotCountKVO:;
- (id)friendsRequestDotCountKVO;
- (void)setYellowDotSwitchKVO:;
- (id)yellowDotSwitchKVO;
- (BOOL)shouldShowYellowNumAvatarOnTopTab;
- (void)setAvatarRedDotLastShownDateIfNeeded;
- (void)tryPreloadWhenRedDotNoAvatar;
- (BOOL)shouldTryPreloadWhenRedDotNoAvatar;
- (void)showUnreadBubbleWithBubbleModel:completion:;
- (void)setIsShowingUnreadBubble:;
- (void)hideAvatarViewWhenFamiliarFeedRemoveUser:;
- (void)reduceFriendsRequestCountWithUserID:;
- (void)reduceFriendsRequestDotCount;
- (void)configYellowDot:isColdLaunch:context:;
- (void)configWithModel:sourceType:;
- (void)recordFastSlideConcernVideoCount;
- (void)recordFastSlideTipOneSessionShowCount;
- (BOOL)shouldShowFastSlideTipBubble;
- (void)recordLastFastSlideTipShowDate:;
- (void)resetFastSlideShowTimer;
- (void)resetFastSlideTipBubbleRecord;
- (unsigned long long)preFriendsUnreadCount;
- (void)setDotStatusModel:;
- (BOOL)dontTrackShowForCloseFriend;
- (void)setDontTrackShowForCloseFriend:;
- (void)setImChatUnreadCount:;
- (void)setLastValidEnterFamiliarDate:;
- (BOOL)isEnterFamiliarValid;
- (void)setAlreadyShownFriendsAvatarList:;
- (BOOL)shouldClearFastSlideShowTimer;
- (long long)familiarTabNumberDotShowingCount;
- (void)setFilteredFriendsVideoFromOtherPages:;
- (BOOL)shouldClearProfileRecommendDotInLinkage;
- (void)setShouldClearProfileRecommendDotInLinkage:;
- (BOOL)ignoreNextYellowDotShowEvent;
- (void)setIgnoreNextYellowDotShowEvent:;
- (void)setFamiliarHistoryTypeValue:;
- (void)setCloseFriendsCount:;
- (BOOL)shouldClearUnreadCountOnNextReadCount;
- (unsigned long long)yellowDotPullTypeInPreviousLifeTime;
- (void)setIsYellowNumAvatarEnable:;
- (id)friendsTabAvatarInfo;
- (void)setFriendsTabAvatarInfo:;
- (void)setFriendsRequestManager:;
- (void)setAwemePlayedArray:;
- (long long)reduceCountWhenLargerThan99;
- (void)setYellowMultiAvatarContext:;
- (void)setCurrentShowYellowNumAvatarIndex:;
- (void)setPreFriendsUnreadCount:;
- (void)setSourceType:;
- (unsigned long long)sourceType;
- (id)init;
- (void)dealloc;
- (id)sourceTypeName;
- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (unsigned long long)countType;
- (void)setCountType:;
- (void)addObservers;
- (void)setSettingManager:;
- (id)settingManager;
- (long long)modelCount;
+ (id)sharedInstance;
@end
