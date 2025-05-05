@interface RPBroadcastHostViewController : _UIRemoteViewController
@property (nonatomic) RPBroadcastExtensionHostContext hostContext;
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
- (void)setListenerEndpoint:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
- (id)hostContext;
- (void)setHostContext:;
- (id)completeSetupWithBroadcastURL:;
- (void)updateBroadcastHandlerListenerEndpoint;
@end
