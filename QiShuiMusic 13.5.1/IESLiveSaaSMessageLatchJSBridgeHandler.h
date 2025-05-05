@interface IESLiveSaaSMessageLatchJSBridgeHandler : NSObject
@property (nonatomic) <IESLivePiperProtocol> jsBridge;
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) NSMutableDictionary classToMessageTypeDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
- (id)classToMessageTypeDict;
- (id)disposable;
- (id)initWithDIContext:;
- (id)jsBridge;
- (void)registerHandlerWithBridge:;
- (void)setClassToMessageTypeDict:;
- (void)setDisposable:;
- (void)setJsBridge:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
