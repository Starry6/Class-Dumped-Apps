@interface EDMailDropMetadataGenerator : NSObject
@property (nonatomic) WKWebView webView;
@property (nonatomic) NSMutableArray scriptHandlers;
@property (nonatomic) EFPromise activePromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWebView:;
- (void)dealloc;
- (void)webView:didFinishNavigation:;
- (id)webView;
- (void)webView:didFailProvisionalNavigation:withError:;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:;
- (void)generateMailDropMetadataForContentURL:completionHandler:;
- (void)insertMailDropAttachmentViewForContentURL:HTMLByContentID:completionHandler:;
- (id)withTimeout:do:completion:;
- (void)tearDownWebView;
- (BOOL)_shouldSearchForMailDropNodesInFileURL:;
- (void)_findMailDropNodesInFileURL:promise:;
- (void)_addScriptHandlerForKey:handler:;
- (id)scriptHandlers;
- (void)setScriptHandlers:;
- (id)activePromise;
- (void)setActivePromise:;
@end
