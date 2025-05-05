@interface IESLiveSaaSPassthroughMsgJSBridgeHandler : NSObject
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) NSArray messageTypes;
@property (nonatomic) <IESLivePiperProtocol> jsBridge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (id)jsBridge;
- (id)messageTypes;
- (void)registerHandlerWithBridge:;
- (void)setDisposable:;
- (void)setJsBridge:;
- (void)setMessageTypes:;
- (void)setupMessage;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
