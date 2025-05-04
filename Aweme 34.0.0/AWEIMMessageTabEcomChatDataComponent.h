@interface AWEIMMessageTabEcomChatDataComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabEcomChatDataAction> dataAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewWillAppear;
- (void)userDidLogin;
- (void)didReloadChatList;
- (void)didAddNewMessage;
- (void)didEndPullOfflineMessages;
- (void)didInsertChatListAtIndex:;
- (void)didMoveNewMessageToNewIndex:fromOldIndex:;
- (void)didClearChatList;
- (void)didReloadChatListAtIndex:;
- (void)didUpdatePeerUser:;
- (void)didUpdatePeerUsers:;
- (void)didUpdateUnreadCount:forChatDataManagerType:;
- (void)didUpdateNoticeChatListForChats:;
- (void)prepareReloadServiceList;
- (void)setDataAction:;
- (id)dataAction;
- (void)userDidLogout;
- (void)didFinishFetchRecentChatActiveStatus:;
- (void).cxx_destruct;
@end
