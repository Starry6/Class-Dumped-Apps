@interface IESIMMessageSender : NSObject
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESIMSendMessageLoggerProtocol> logger;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)message:inConversation:didReceiveAsyncResponse:error:;
- (void)message:inConversation:didReceiveResponse:error:;
- (void)resendMessage:inConversation:;
- (id)responseWithTIMResponse:message:inConversation:error:;
- (id)logger;
- (void)addDelegate:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)dealloc;
- (id)sendMessage:;
- (id)token;
- (void)removeDelegate:;
- (void)setLogger:;
- (void)setToken:;
- (void).cxx_destruct;
@end
