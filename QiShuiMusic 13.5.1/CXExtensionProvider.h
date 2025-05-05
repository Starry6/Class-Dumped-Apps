@interface CXExtensionProvider : CXProvider
@property (nonatomic) CXProviderExtensionVendorContext extensionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)extensionContext;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void)beginRequestWithExtensionContext:;
- (void)setExtensionContext:;
- (void)providerExtensionVendorContext:receivedCommittedTransaction:;
- (void)providerExtensionVendorContext:handledActionTimeout:;
- (void)providerExtensionVendorContext:handledAudioSessionActivationStateChangedTo:;
- (BOOL)requiresProxyingAVAudioSessionState;
@end
