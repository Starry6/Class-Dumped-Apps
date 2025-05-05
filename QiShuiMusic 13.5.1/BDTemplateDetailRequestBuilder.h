@interface BDTemplateDetailRequestBuilder : NSObject
@property (nonatomic) NSString requestURL;
@property (nonatomic) @ params;
@property (nonatomic) NSString method;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) NSDictionary headerField;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL preloadOnlyWIFI;
- (BOOL)preloadOnlyWIFI;
- (void)setHeaderField:;
- (id)headerField;
- (BOOL)needCommonParams;
- (void)requestWithRetry:completion:;
- (void)setNeedCommonParams:;
- (void)setPreloadOnlyWIFI:;
- (id)requestURL;
- (id)init;
- (id)method;
- (double)timeoutInterval;
- (void)setRequestURL:;
- (void).cxx_destruct;
- (void)setMethod:;
- (void)setTimeoutInterval:;
- (id)params;
- (void)setParams:;
@end
