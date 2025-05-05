@interface IESIMStrangerInboxManager : NSObject
@property (nonatomic) IESSaaSTIMOStrangerExplicit dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESIMLoginManagerProtocol> loginManager;
@property (nonatomic) q unreadCount;
@property (nonatomic) <IESIMStrangerConversationProtocol> latestConversation;
@property (nonatomic) <IESIMStrangerInboxManagerDelegate> delegate;
- (void)fetchStrangerChatInboxWithCompletion:;
- (id)inboxMarkReadKey;
- (id)latestConversation;
- (void)markReadInbox;
- (void)removeStrangerChatInboxWithCompletion:;
- (void)setLatestConversation:;
- (void)strangerInboxDidUpdate:;
- (void)strangerInboxDidUpdate:shouldClearUnreadCount:;
- (long long)unreadCount;
- (void)setDataSource:;
- (id)init;
- (void)setDelegate:;
- (void)setUnreadCount:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)loginManager;
- (void)setLoginManager:;
@end
