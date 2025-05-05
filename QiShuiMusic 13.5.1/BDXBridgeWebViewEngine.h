@interface BDXBridgeWebViewEngine : NSObject
@property (nonatomic) BDXBridgeWebViewBridge bridge;
@property (nonatomic) <BDXBridgeEngineCallMessageHandler> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)assertIfOldTTEngineExistForWebView:;
- (void)setupWithContainer:;
- (id)messageHandler;
- (id)bridge;
- (void).cxx_destruct;
- (void)setMessageHandler:;
- (void)setBridge:;
@end
