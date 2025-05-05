@interface CSJWebViewOwner : NSObject
@property (nonatomic) CSJWKWebViewClient webViewClient;
@property (nonatomic) BOOL isCache;
- (BOOL)isCache;
- (id)initWithWebViewClient:isCache:;
- (void)setIsCache:;
- (void)setWebViewClient:;
- (id)webViewClient;
- (void)dealloc;
- (void).cxx_destruct;
@end
