@interface NEAppProxyProviderContainer : NSObject
@property (nonatomic) NEAppProxyProvider provider;
- (void)wake;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setConfiguration:;
- (void)setDelegateInterface:;
- (void)startWithOptions:completionHandler:;
- (id)provider;
- (void)sleepWithCompletionHandler:;
- (void).cxx_destruct;
- (void)handleAppMessage:completionHandler:;
- (id)initWithDelegate:providerClass:;
- (void)setInitialFlowDivertControlSocket:;
@end
