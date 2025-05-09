@interface AWEIMCommentAtAndDiggViewController : UIViewController
@property (nonatomic) UIView topSafeTipView;
@property (nonatomic) q unreadCount;
@property (nonatomic) UIView noticeContainerView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMNotificationListDataController currentDataController;
@property (nonatomic) AWENoticeInteractionListControllerViewModel viewModel;
@property (nonatomic) NSSet lastVisibleChatSet;
@property (nonatomic) NSMutableDictionary lastVisibleChatMap;
@property (nonatomic) NSMutableDictionary lastVisibleCacheChatMap;
@property (nonatomic) NSMutableSet shouldShowLightInteractionButtonNoticeModelIDSet;
@property (nonatomic) UIImageView clickedAvatarView;
@property (nonatomic) AWEUITextLoadingView loadingView;
@property (nonatomic) q commentCount;
@property (nonatomic) q moreGroupNoticeCount;
@property (nonatomic) q recommendCount;
@property (nonatomic) q atCount;
@property (nonatomic) q likeCount;
@property (nonatomic) NSIndexPath zoomIndexPath;
@property (nonatomic) NSMutableDictionary trackFirstShowForReplyButtonInCell;
@property (nonatomic) AWEInteractionFilterController interactionManager;
@property (nonatomic) Q recommendState;
@property (nonatomic) BOOL dataSourceChanging;
@property (nonatomic) NSObject<AWEUserRecommendTableViewManagerProtocol> recommendTableViewManager;
@property (nonatomic) <AWEUserRecommendTableDataSourceProtocol> recommendSnapshot;
@property (nonatomic) <AWEUserRecommendTableSectionProviderProtocol> recommendSectionProvider;
@property (nonatomic) BOOL isUnfolding;
@property (nonatomic) BOOL hasChangedSelector;
@property (nonatomic) NSMutableArray currentDataSource;
@property (nonatomic) BOOL disableTrackShow;
@property (nonatomic) NSMutableSet relationTrackSet;
@property (nonatomic) NSMutableSet localReadedNoticeIDsSet;
@property (nonatomic) BOOL needClearLocalReadedNoticeIDsSetAfterRefreshFetch;
@property (nonatomic) AFDListExpandFooterView footerView;
@property (nonatomic) AWEIMInteractNoticeBubbleView unreadBubble;
@property (nonatomic) <AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (nonatomic) <AWECommentInputViewManagerProtocol> productCommentInputViewManager;
@property (nonatomic) <AWECommentInputViewContextProtocol> commentContext;
@property (nonatomic) UIView searchContainerView;
@property (nonatomic) UIView searchMusicContainerView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) AWENotificationModelNew notiModel;
@property (nonatomic) MASConstraint commentSearchShow;
@property (nonatomic) MASConstraint commentSearchHide;
@property (nonatomic) MASConstraint commentMusicSearchShow;
@property (nonatomic) MASConstraint commentMusicSearchHide;
@property (nonatomic) BOOL isReplyToComment;
@property (nonatomic) Q defaultType;
@property (nonatomic) BOOL showMentionGridList;
@property (nonatomic) BOOL isLoadCache;
@property (nonatomic) BOOL isSwitchTab;
@property (nonatomic) BOOL isLastFold;
@property (nonatomic) BOOL isExpandReloading;
@property (nonatomic) NSMutableDictionary recordMultiTabsContentOffsetYDict;
@property (nonatomic) BOOL isWillDisappearing;
@property (nonatomic) BOOL isDidDisappearing;
@property (nonatomic) BOOL initRefreshHasFinished;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL isBackFromAwemeDetail;
@property (nonatomic) BOOL isBackFromVisitorDetail;
@property (nonatomic) BOOL isFromOuterPush;
@property (nonatomic) NSString ruleId;
@property (nonatomic) NSString landType;
@property (nonatomic) NSString landSubType;
@property (nonatomic) BOOL isFromPush;
@property (nonatomic) BOOL isFirstRefreshRequest;
@property (nonatomic) AWEInteractNoticeConfigManager noticeConfigManager;
@property (nonatomic) NSString pushNoticeID;
@property (nonatomic) <AFDCloseFriendsStoryCircleShowTrackerProtocol> storyCircleShowTracker;
@property (nonatomic) @? selectBlock;
@property (nonatomic) @? switchBlock;
@property (nonatomic) NSArray noticeSubCategories;
@property (nonatomic) NSNumber removingNoticeId;
@property (nonatomic) AWEIMFansSyncContactRemarkViewModel contactViewModel;
@property (nonatomic) AWEIMFansSyncContactRemarkView contactTipsView;
@property (nonatomic) BOOL hasRecordContactTipsViewShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (id)referString;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)setAweui_viewControllerState:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (id)zoomTransitionStartViewForOffset:;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (id)enterFrom;
- (id)commentModel;
- (void)setCommentModel:;
- (void)setLikeCount:;
- (id)getFilterType;
- (id)aweui_emptyPageBelowView;
- (id)aweui_emptyPageBgContainerView;
- (void)setSelectBlock:;
- (id)storyCircleShowTracker;
- (void)coverTappedWithOptions:;
- (void)coverTappedWithUrl:atIndexPath:;
- (void)deleteCellForTableView:atIndexPath:;
- (void)commentReplyButtonTappedWithOptions:;
- (void)presentEmoticonBoardAndScrollToVmoticonTab;
- (void)resetUnreadCount;
- (void)showInputViewWithOptions:enterMethod:;
- (BOOL)shouldShowLightInteractionButtonWithOptions:;
- (BOOL)shouldShowQuickReplyButtonWithOptions:;
- (void)showQuickReplyViewWithOptions:;
- (void)sendLightInteractionWithOptions:;
- (void)setStoryCircleShowTracker:;
- (void)avatarTappedWithOptions:;
- (id)lightInteractionButtonIconUrl;
- (void)followStatusChanged:atIndexPath:;
- (void)nicknameTappedWithOptions:;
- (void)addLocalReadedNoticeID:;
- (void)interactionNoticePageBeginRefreshData;
- (void)setSwitchBlock:;
- (id)switchBlock;
- (long long)recommendCount;
- (void)setRecommendCount:;
- (void)trackFirstCommentGuideShow;
- (void)trackFirstCommentGuideClick:;
- (void)_endRefreshing;
- (void)backBtnClicked:;
- (BOOL)isFromPush;
- (id)recommendSectionProvider;
- (long long)recommendSectionForManager:;
- (void)recommendSectionWillBecomeEmpty;
- (void)recommendSectionDidBecomeEmpty;
- (void)recommendSectionDidBecomeNonEmpty;
- (BOOL)enableShowRecommendSection;
- (BOOL)cellShowFullScreen;
- (id)commentContext;
- (void)setCommentContext:;
- (id)commentInputViewManager;
- (BOOL)isSwitchTab;
- (void)setIsSwitchTab:;
- (void)configCollectionView;
- (void)setIsFromPush:;
- (id)searchContainerView;
- (void)setSearchContainerView:;
- (id)commentSearchHide;
- (void)setCommentSearchHide:;
- (id)currentDataController;
- (void)setCurrentDataController:;
- (void)perf_setExtra;
- (double)__screenAvailableWidth;
- (double)__screenAvailableHeight;
- (long long)moreGroupNoticeCount;
- (void)setNotiModel:;
- (void)p_setupNavigationBar;
- (void)setClickedAvatarView:;
- (id)clickedAvatarView;
- (void)p_trackInnerMessageNotification;
- (void)setNoticeConfigManager:;
- (id)noticeConfigManager;
- (void)handleDataSourceIfNeed;
- (void)setIsWillDisappearing:;
- (void)setIsDidDisappearing:;
- (id)shouldShowLightInteractionButtonNoticeModelIDSet;
- (id)unreadBubble;
- (BOOL)needClearLocalReadedNoticeIDsSetAfterRefreshFetch;
- (id)localReadedNoticeIDsSet;
- (BOOL)initRefreshHasFinished;
- (void)setInitRefreshHasFinished:;
- (void)setNeedClearLocalReadedNoticeIDsSetAfterRefreshFetch:;
- (void)_updateLastVisibleSet;
- (double)navigationHeight;
- (void)setLastVisibleChatSet:;
- (void)configCellLongPressGestureIfNeeded:;
- (void)p_trackInteractionNotificationClickedWithIndexPath:;
- (id)lastVisibleChatSet;
- (BOOL)isWillDisappearing;
- (BOOL)isDidDisappearing;
- (id)relationTrackSet;
- (id)swipeActionsWithClassType:indexPath:tableView:;
- (void)p_trackSlideCellAtIndexPath:;
- (void)p_showSendMessageSuccessToastForUser:;
- (void)trackAndTransToProfileWithOptions:enterMethod:enterPosition:;
- (BOOL)_proceccedURLFromAtSchemeURL:;
- (void)p_showQuickReplyViewWithOptions:replyModel:panelLevel:needReplyModel:;
- (void)p_sendLightInteractionMessageWithOptions:avatarView:containerView:enterMethod:noticeDefault:panelLevel:;
- (BOOL)p_shouldShowInteractionButtonWithOptions:;
- (void)p_updateUserStatus:status:isBlock:;
- (void)p_updateCellNameLabel:user:;
- (void)onVisitAt:;
- (void)innerTrackEvent:params:;
- (void)setShouldShowLightInteractionButtonNoticeModelIDSet:;
- (void)setRelationTrackSet:;
- (void)setLocalReadedNoticeIDsSet:;
- (void)setUnreadBubble:;
- (void)setMoreGroupNoticeCount:;
- (void)setAtCount:;
- (void)setIsBackFromAwemeDetail:;
- (void)setPushNoticeID:;
- (void)setLandType:;
- (void)setLandSubType:;
- (void)setIsFromOuterPush:;
- (void)setIsBackFromVisitorDetail:;
- (id)landType;
- (id)landSubType;
- (void)setShowMentionGridList:;
- (id)pushNoticeID;
- (void)__showNormalTopTipsViewIfNeeded:isAfterNetworkRequest:;
- (id)topSafeTipView;
- (void)setTopSafeTipView:;
- (BOOL)__showDisturbingTipViewIfNeeded:;
- (void)showContactRemarkTipsViewIfNeeded;
- (id)contactViewModel;
- (id)contactTipsView;
- (BOOL)hasRecordContactTipsViewShow;
- (void)setHasRecordContactTipsViewShow:;
- (void)dismissContactRemarkTipsViewIfNeeded;
- (void)commentNoMoreNoticeNotification:;
- (void)dimissSnackbar;
- (void)setIsLastFold:;
- (BOOL)isFromOuterPush;
- (BOOL)isBackFromAwemeDetail;
- (BOOL)isBackFromVisitorDetail;
- (void)p_setupGroups;
- (void)p_refreshLoadCacheIfNeedWithLoadingView:withCompletion:;
- (void)refreshDataWithLoadingView:;
- (void)p_trackEnterInteractionNotification;
- (void)__showSafetyTipsViewIfNeeded;
- (void)showOwnPostedDanmakuRedDotGuideIfNeeded;
- (void)__dismissDisturbingViewIfNeeded;
- (BOOL)isLoadCache;
- (void)setIsLoadCache:;
- (id)recommendSnapshot;
- (void)setRecommendSnapshot:;
- (void)updateCurrentDataSource;
- (id)noticeSubCategories;
- (void)setNoticeSubCategories:;
- (double)tableViewInsetT;
- (void)setRecommendState:;
- (id)createInteractionFilterController;
- (void)setInteractionManager:;
- (void)setHasChangedSelector:;
- (void)checkAndRemoveFollowedRecommendUser;
- (id)recordMultiTabsContentOffsetYDict;
- (id)noticeContainerView;
- (void)refreshDataWithLoadingView:byPullDown:needWorkRequest:completion:;
- (void)p_updateDataControllerUnreadCount;
- (long long)atCount;
- (void)setDisableTrackShow:;
- (void)refreshDataWithLoadingView:byPullDown:;
- (BOOL)dataSourceChanging;
- (void)setDataSourceChanging:;
- (BOOL)hasChangedSelector;
- (id)noticeUserIDs;
- (id)lastVisibleChatMap;
- (void)perfSetExtraWithShouldShowRecommend:;
- (BOOL)isUnfolding;
- (BOOL)p_currentDataControllerIsEmpty;
- (void)p_endRefreshingWithHeaderCompletionBlock:;
- (void)_loadMoreDataWithIsPreload:;
- (void)_loadMoreDataWithIsPreload:completion:;
- (unsigned long long)recommendState;
- (id)recommendTableViewManager;
- (id)getLastVisibleSet;
- (double)p_heightForRowWithModel:;
- (void)willDeleteRecommendSection;
- (id)p_titleText;
- (id)p_informativeText;
- (id)p_cellIdentifierFromType:withGroup:;
- (long long)currentDisplayCount;
- (void)p_trackerInnerMessageWithAction:indexPath:noticeType:;
- (void)p_decreaseUnreadCountWithType:;
- (void)reportDeleteNotice:;
- (void)trackDeleteNoticeFromTableView:;
- (void)__deleteNoticeFromTableView:atIndexPath:needReportDelete:;
- (void)setZoomIndexPath:;
- (void)onVisitComment:;
- (void)onVisitForward:;
- (id)trackFirstShowForReplyButtonInCell;
- (id)getLastVisibleCacheChatSetWithGroup:;
- (id)getLastVisibleChatSetWithGroup:;
- (BOOL)disableTrackShow;
- (BOOL)isExpandReloading;
- (BOOL)p_shouldShowExpandFooterView;
- (void)p_expandFooterView:;
- (void)trackExpandFooterViewClick;
- (void)__announceAccessibility:;
- (void)setIsUnfolding:;
- (void)p_reloadTableViewWithFooterView:;
- (void)setIsExpandReloading:;
- (id)p_accountTypeForTracker:withModel:;
- (id)p_storyFromItemForTracker:;
- (id)removingNoticeId;
- (long long)p_enableDisplayCount;
- (void)visitNegativeCommentList:;
- (void)visitVideoWithCommentNotice:source:isFromCover:;
- (void)setIsReplyToComment:;
- (id)productCommentInputViewManager;
- (void)handleAtClickForMoment:;
- (void)handleAtClickForLongVideo:;
- (void)onVisitPolymericCommentList:;
- (void)handleLongVideoClick:;
- (void)viewWillLayoutSubviewsForMultiTabLowFans;
- (id)lastVisibleCacheChatMap;
- (BOOL)isLastFold;
- (void)trackPostReplyComment;
- (id)zoomIndexPath;
- (void)clickDeleteBtn:atIndexPath:;
- (void)clickRemoveFansBtn:;
- (id)disturbingTipView;
- (BOOL)canRemoveModelAtIndexPath:;
- (void)setRemovingNoticeId:;
- (void)showRefuseFollowRequestSnackBar:indexPath:;
- (void)revertRemovedModel:atIndexPath:;
- (void)showRemoveFansSnackbar:notiModel:;
- (void)tipsViewDidDismissed:;
- (void)observeShowContactTipsViewIfNeeded;
- (id)commentInputViewParentView;
- (void)notificationSetupButtonCilcked;
- (void)setNoticeContainerView:;
- (void)setLastVisibleChatMap:;
- (void)setLastVisibleCacheChatMap:;
- (void)setTrackFirstShowForReplyButtonInCell:;
- (void)setRecommendTableViewManager:;
- (void)setProductCommentInputViewManager:;
- (id)searchMusicContainerView;
- (void)setSearchMusicContainerView:;
- (id)notiModel;
- (id)commentSearchShow;
- (void)setCommentSearchShow:;
- (id)commentMusicSearchShow;
- (void)setCommentMusicSearchShow:;
- (id)commentMusicSearchHide;
- (void)setCommentMusicSearchHide:;
- (BOOL)isReplyToComment;
- (BOOL)showMentionGridList;
- (void)setRecordMultiTabsContentOffsetYDict:;
- (BOOL)isFirstRefreshRequest;
- (void)setIsFirstRefreshRequest:;
- (void)setContactViewModel:;
- (void)setContactTipsView:;
- (void)setCommentInputViewManager:;
- (long long)unreadCount;
- (void)setModel:;
- (void)viewWillDisappear:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)dealloc;
- (void)setFooterView:;
- (long long)numberOfSectionsInTableView:;
- (void)viewWillLayoutSubviews;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)setUnreadCount:;
- (void)tableView:didSelectRowAtIndexPath:;
- (id)footerView;
- (void)setTableView:;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)tableView;
- (id)loadingView;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (id)model;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillAppear:;
- (id)currentDataSource;
- (void)setViewModel:;
- (void)setCurrentDataSource:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)viewDidAppear:;
- (id)tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (void)tableView:didEndEditingRowAtIndexPath:;
- (id)tableView:editActionsForRowAtIndexPath:;
- (long long)tableView:editingStyleForRowAtIndexPath:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)tableView:willBeginEditingRowAtIndexPath:;
- (long long)commentCount;
- (long long)likeCount;
- (void)setCommentCount:;
- (void)setupNavigationBar;
- (double)footerInset;
- (void)_setupUI;
- (id)selectBlock;
- (id)ruleId;
- (void)setRuleId:;
- (BOOL)canEditRowAtIndexPath:;
- (id)interactionManager;
- (void)setDefaultType:;
- (unsigned long long)defaultType;
@end
