@interface IESIMStrangerChatDataManager : NSObject
@property (nonatomic) IESSaaSTIMOStrangerConversationDataSource dataSource;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deleteMessage:inConversation:completion:;
- (void)fetchMessagesInConversation:completion:;
- (void)fetchStrangerChatListWithBizInfo:completion:;
- (void)fetchStrangerChatListWithCompletion:;
- (BOOL)isRequesting;
- (void)markAllConversationReadWithCompletion:;
- (void)markConversationAsRead:completion:;
- (void)removeStrangerChat:completion:;
- (void)setIsRequesting:;
- (void)strangerConversationDataSourceDidUpdate:updateConversationIdentifiers:reason:;
- (void)addDelegate:;
- (void)setDataSource:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)removeDelegate:;
- (id)dataSource;
- (void).cxx_destruct;
@end
