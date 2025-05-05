@interface BDDownloadTaskConfig : NSObject
@property (nonatomic) q priority;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL immediately;
@property (nonatomic) BOOL progressDownload;
@property (nonatomic) BOOL progressDownloadForThumbnail;
@property (nonatomic) BOOL verifyData;
@property (nonatomic) NSDictionary requestHeaders;
- (void)setImmediately:;
- (BOOL)immediately;
- (BOOL)progressDownload;
- (BOOL)progressDownloadForThumbnail;
- (void)setProgressDownload:;
- (void)setProgressDownloadForThumbnail:;
- (void)setVerifyData:;
- (BOOL)verifyData;
- (id)init;
- (void)setPriority:;
- (double)timeoutInterval;
- (void).cxx_destruct;
- (void)setTimeoutInterval:;
- (long long)priority;
- (id)requestHeaders;
- (void)setRequestHeaders:;
@end
