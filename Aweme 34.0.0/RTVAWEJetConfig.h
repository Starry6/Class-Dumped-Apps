@interface RTVAWEJetConfig : NSObject
@property (nonatomic) <RTVJetHttpWebAccessProtocol> httpWebAccess;
@property (nonatomic) <RTVJetHTTPRetryableValidatorInterface> httpRetryableValidator;
@property (nonatomic) <RTVJetWebSocketBridgeInterface> webSocketBridge;
@property (nonatomic) <RTVJetConfigOptionsProtocol> config;
@property (nonatomic) <RTVJetMonitorProtocol> monitor;
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (id)httpWebAccess;
- (id)httpRetryableValidator;
- (id)initWithHttpWebAccess:httpRetryableValidator:webSocketBridge:monitor:;
- (id)webSocketBridge;
- (void)setHttpWebAccess:;
- (void)setHttpRetryableValidator:;
- (void)setWebSocketBridge:;
- (void)setConfig:;
- (void)setMonitor:;
- (id)monitor;
- (id)config;
- (id)injector;
- (void).cxx_destruct;
+ (id)rxInjectorInitializer;
@end
