@interface DownloadProgressInfo : NSObject
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSString secondUrl;
@property (nonatomic) float progress;
@property (nonatomic) q netDownloadSpeed;
@property (nonatomic) q downloadedSize;
@property (nonatomic) q totalSize;
- (long long)downloadedSize;
- (long long)netDownloadSpeed;
- (id)secondUrl;
- (void)setDownloadedSize:;
- (void)setNetDownloadSpeed:;
- (void)setSecondUrl:;
- (void)setProgress:;
- (float)progress;
- (void).cxx_destruct;
- (long long)totalSize;
- (void)setTotalSize:;
- (id)urlKey;
- (void)setUrlKey:;
@end
