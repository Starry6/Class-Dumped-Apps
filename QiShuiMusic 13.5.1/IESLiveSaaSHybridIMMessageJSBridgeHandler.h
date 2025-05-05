@interface IESLiveSaaSHybridIMMessageJSBridgeHandler : NSObject
@property (nonatomic) <IESLivePiperProtocol> jsBridge;
@property (nonatomic) IESLiveSaaSHybridIMMessageHandler imHandler;
@property (nonatomic) NSNumber currentRoomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
- (void)registerConnect;
- (id)currentRoomID;
- (id)imHandler;
- (id)jsBridge;
- (void)registerDisconnect;
- (void)registerHandlerWithBridge:;
- (void)registerMessageType;
- (void)setCurrentRoomID:;
- (void)setImHandler:;
- (void)setJsBridge:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
