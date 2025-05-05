@interface IESIMLongConnectionClientUnderlayingWebSocketImpl : NSObject
@property (nonatomic) <IESIMWSConnectionManagerProtocol> wsConnectManager;
@property (nonatomic) <IESIMSuspendWSConnectionCheckerProtocol> wsSuspendChecker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generateNextMessage;
- (void)handleIMPushMessage:;
- (id)notifyNewMessageCallback;
- (void)setNotifyNewMessageCallback:;
- (void)setWsConnectManager:;
- (void)setWsSuspendChecker:;
- (BOOL)webSocketBreak;
- (void)webSocketRequestDidFinishWithError:;
- (id)wsConnectManager;
- (id)wsSuspendChecker;
- (BOOL)sendMessage:;
- (void).cxx_destruct;
@end
