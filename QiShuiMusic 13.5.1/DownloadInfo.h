@interface DownloadInfo : NSObject
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSString secondUrl;
@property (nonatomic) q status;
@property (nonatomic) NSString inputFileName;
@property (nonatomic) q downloadedSize;
@property (nonatomic) q totalSize;
@property (nonatomic) NSString fileFullPath;
- (long long)downloadedSize;
- (id)fileFullPath;
- (id)inputFileName;
- (id)secondUrl;
- (void)setDownloadedSize:;
- (void)setFileFullPath:;
- (void)setInputFileName:;
- (void)setSecondUrl:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (long long)totalSize;
- (void)setTotalSize:;
- (id)urlKey;
- (void)setUrlKey:;
@end
