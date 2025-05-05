@interface BDXBridgeProtocolManager : NSObject
@property (nonatomic) <BDXBridgeContainerFirerProtocol> container;
@property (nonatomic) <BDXBridgeEngineProtocol> bridgeEngine;
@property (nonatomic) <BDXBridgeEngineCallMessageHandler> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeEngine;
- (void)fireEvent:params:resultBlock:;
- (void)handleCallMessage:resultHandler:;
- (void)setBridgeEngine:;
- (void)setupWithWebView:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (id)messageHandler;
- (void).cxx_destruct;
- (void)setMessageHandler:;
@end
