@interface AWEIMChatListComponent : AWEIMMessageTabBaseListComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMTabIndicatorModel indicatorModel;
@property (nonatomic) AWEIMListTabWrapperViewController wrapperVC;
@property (nonatomic) <AWEIMMessageTabLiveGroupInterface> liveGroupService;
@property (nonatomic) <AWEIMMessageTabNaviBarInterface> naviBarService;
@property (nonatomic) <AWEIMMessageTabLandingInterface> landingService;
@property (nonatomic) <AWEIMChatListHeaderInterface> headerService;
@property (nonatomic) <AWEIMChatListComponentOutputProtocol> outputPublisher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (void)didFinishLogin;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:enterFrom:;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (id)headerService;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)indicatorModel;
- (void)setIndicatorModel:;
- (void)scrollViewDidEndScroll;
- (void)p_updateTitleLabel;
- (void)setNaviBarService:;
- (id)naviBarService;
- (void)didInsertedChatListForChats:;
- (void)setHeaderService:;
- (void)__didChangeMessageTabMode:;
- (void)didReloadChatList;
- (BOOL)canShowCampaignInCurrentViewController;
- (void)didAddNewMessage;
- (void)didEndPullOfflineMessages;
- (void)didInsertChatListAtIndex:;
- (void)didMoveNewMessageToNewIndex:fromOldIndex:;
- (void)didReloadChatListRightNow;
- (void)didClearChatList;
- (void)afterRenderFirstScreenData:;
- (void)didReloadChatListAtIndex:;
- (void)listViewControllerWillAppear:;
- (void)listViewControllerDidAppear:;
- (id)wrapperVC;
- (void)setWrapperVC:;
- (void)p_setupDefaultLanding:;
- (BOOL)canShowChildViewController;
- (id)viewControllerIdentify;
- (id)viewControllerforSkeleton;
- (id)tabIndicatorModel;
- (BOOL)canShowHeaderInCurrentViewController;
- (void)willRemoveCurrentViewControllerFromTabSkeletion;
- (BOOL)shouldRemoveCurrentViewControllerFromTabSkeletonWhenSwitchAccount;
- (void)willReLandingToCurrentPreferTab;
- (void)willDeleteChat:completion:;
- (void)willNotDisPlayChat:completion:;
- (void)scrollViewWillBeginScroll;
- (void)chatListNewCellShowedUp;
- (void)scrollToOffset:;
- (BOOL)canEditRowAtIndexPath:actionType:;
- (id)emptyTitleInCurrentGroup;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (id)messageTabContext;
- (void)updateNoticeChatListForChats:;
- (long long)currentTotalUnreadCount;
- (id)chatListViewController;
- (BOOL)enablePublish;
- (void)setOutputPublisher:;
- (void)setLiveGroupService:;
- (void)setLandingService:;
- (void)trackFirstPageExperience;
- (id)outputPublisher;
- (long long)p_unReadCount;
- (void)p_updateTabIndicatorUnReadCount;
- (id)landingService;
- (id)p_filterChatListForAccount:;
- (id)liveGroupService;
- (long long)entryType;
- (id)position;
- (void).cxx_destruct;
- (id)sceneType;
- (id)tabID;
- (id)componentManager;
- (id)dataList;
@end
