@interface AWEIMStrangerChatListViewController : UIViewController
@property (nonatomic) AWEIMChatListViewController chatListVC;
@property (nonatomic) NSMutableArray chatList;
@property (nonatomic) <IESIMStrangerChatDataManagerProtocol> dataController;
@property (nonatomic) AWEButton readBtn;
@property (nonatomic) AWEIMStrangerTipView tipView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)readBtn;
- (void)backBtnClicked:;
- (void)didBecomeEmpty:;
- (void)layoutTableView;
- (void)addNavigationBarUnreadViewIfNeeded;
- (id)chatListVC;
- (void)closeTipView;
- (BOOL)configWithRouterParamDict:;
- (void)didTransferToChat:entryType:isPushByFromVC:completion:;
- (void)handleRemoveStrangerChatNoti:;
- (void)handleUpdateStrangerDraftNoti:;
- (void)iesim_strangerConversationDataSourceDidUpdate:updateConversationIdentifiers:reason:;
- (BOOL)isShowTipView;
- (void)markAllChatReadBtnTapped:;
- (void)p_endRrefreshingWithHasMore:;
- (void)p_fetchData;
- (id)p_findChatInListWith:;
- (void)p_loadMoreData;
- (void)p_removeChatOfSessionId:;
- (void)p_setupUI;
- (void)p_sortChatList;
- (void)p_updateWithChat:;
- (void)setChatList:;
- (void)setChatListVC:;
- (void)setDataController:;
- (void)setReadBtn:;
- (void)setUpTipView;
- (void)showTipView;
- (BOOL)showTipViewWhenHasUnread;
- (void)updateShowTipView:;
- (void)updateTableViewLayout;
- (void)willDeleteChat:completion:;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (id)chatList;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)viewDidLoad;
- (double)heightForHeaderInSection:;
- (id)dataController;
- (id)tipView;
- (void)setTipView:;
@end
