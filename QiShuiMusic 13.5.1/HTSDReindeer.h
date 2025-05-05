@interface HTSDReindeer : NSObject
@property (nonatomic) NSString downloadingUrl;
@property (nonatomic) q nextUrlIdx;
@property (nonatomic) q numberOfRetries;
@property (nonatomic) NSMutableDictionary urlToErrorMapper;
- (void)bd_becomeKeyWindow:;
- (void)bd_initWithWindowScene:bd_presentModalViewController:;
- (id)downloadingUrl;
- (id)lastDownloadError;
- (long long)nextUrlIdx;
- (void)resetToRetry;
- (BOOL)retryEnabled;
- (void)setDownloadingUrl:;
- (void)setNextUrlIdx:;
- (void)setUrlToErrorMapper:;
- (id)urlToErrorMapper;
- (id)init;
- (long long)numberOfRetries;
- (void).cxx_destruct;
- (void)setNumberOfRetries:;
@end
