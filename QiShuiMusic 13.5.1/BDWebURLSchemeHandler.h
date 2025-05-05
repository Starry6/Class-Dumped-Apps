@interface BDWebURLSchemeHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)webview:recordForMainFrame:;
- (void)webView:startURLSchemeTask:;
- (void)webView:stopURLSchemeTask:;
@end
