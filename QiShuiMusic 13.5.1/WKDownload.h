@interface WKDownload : NSObject
@property (nonatomic) NSURLRequest originalRequest;
@property (nonatomic) WKWebView webView;
@property (nonatomic) <WKDownloadDelegate> delegate;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSProgress progress;
- (void)dealloc;
- (id)webView;
- (void)cancel:;
- (void)setDelegate:;
- (id)_apiObject;
- (id)progress;
- (id)delegate;
- (void).cxx_destruct;
- (id)originalRequest;
- (id).cxx_construct;
@end
