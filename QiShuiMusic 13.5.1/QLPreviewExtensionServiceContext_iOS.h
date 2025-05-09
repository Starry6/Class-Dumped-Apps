@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext
@property (nonatomic) QLPreviewProvider<QLPreviewingController> previewProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)previewProvider;
- (void)setPreviewProvider:;
- (id)previewViewController;
- (id)protocolHost;
- (void)generatePreviewForURL:completion:;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (void)previewWillAppear:;
- (void)previewDidAppear:;
- (void)previewWillDisappear:;
- (void)previewDidDisappear:;
- (void)setAppearance:animated:;
- (void)setHostViewControllerProxy:;
- (void)getARQLInlineProxy3WithCompletionHandler:;
- (void)invalidateService;
- (void)getPrinterProxyWithCompletionHandler:;
- (void)getARQLInlineProxyWithCompletionHandler:;
- (void)getARQLInlineProxy2WithCompletionHandler:;
- (void)previewControllerWantsFullScreen:;
- (void)previewControllerDidUpdateTitle:;
- (void)previewControllerDidUpdatePreferredContentSize:;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
