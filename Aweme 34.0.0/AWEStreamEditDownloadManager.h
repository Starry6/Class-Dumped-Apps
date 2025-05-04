@interface AWEStreamEditDownloadManager : NSObject
@property (nonatomic) q downloaderStatus;
- (long long)downloaderStatus;
- (void)setDownloaderStatus:;
+ (BOOL)checkAVURLAssetValidationWithPublishModel:;
+ (void)replacePublishViewModelVideoInfoIfNeeded:;
+ (BOOL)hasLocalAssetWithPublishModel:;
+ (id)downloadWithURL:playerCacheInfo:enterFrom:fromShareInterface:;
+ (void)stopDownloadWithPublishModel:;
@end
