@interface AWECFWalrus : NSObject
@property (nonatomic) NSString downloadingUrl;
@property (nonatomic) q nextUrlIdx;
@property (nonatomic) q numberOfRetries;
@property (nonatomic) NSMutableDictionary urlToErrorMapper;
- (BOOL)retryEnabled;
- (id)lastDownloadError;
- (void)bd_dismissViewControllerAnimated:bd_presentModalViewController:;
- (void)resetToRetry;
- (void)bd_setNeedsStatusBarAppearanceUpdate:;
- (id)downloadingUrl;
- (void)setDownloadingUrl:;
- (long long)nextUrlIdx;
- (void)setNextUrlIdx:;
- (id)urlToErrorMapper;
- (void)setUrlToErrorMapper:;
- (long long)numberOfRetries;
- (id)init;
- (void).cxx_destruct;
- (void)setNumberOfRetries:;
@end
