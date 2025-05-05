@interface LPFetcherConfiguration : NSObject
@property (nonatomic) WKWebView webViewForProcessSharing;
@property (nonatomic) BOOL loadingIsNonAppInitiated;
@property (nonatomic) q maximumResponseCount;
@property (nonatomic) LPEvent rootEvent;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)webViewForProcessSharing;
- (void)setWebViewForProcessSharing:;
- (BOOL)loadingIsNonAppInitiated;
- (void)setLoadingIsNonAppInitiated:;
- (long long)maximumResponseCount;
- (void)setMaximumResponseCount:;
- (id)rootEvent;
- (void)setRootEvent:;
@end
