@interface WKFrameInfo : NSObject
@property (nonatomic) NSString _sf_titleForJavaScriptDialog;
@property (nonatomic) _WKFrameHandle _handle;
@property (nonatomic) _WKFrameHandle _parentFrameHandle;
@property (nonatomic) BOOL mainFrame;
@property (nonatomic) NSURLRequest request;
@property (nonatomic) WKSecurityOrigin securityOrigin;
@property (nonatomic) WKWebView webView;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_sf_titleForJavaScriptDialog;
- (BOOL)isMainFrame;
- (id)_handle;
- (void)dealloc;
- (id)webView;
- (id)_apiObject;
- (id)request;
- (id)description;
- (id)copyWithZone:;
- (id)securityOrigin;
- (id)_parentFrameHandle;
@end
