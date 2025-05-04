@interface AWEUGPendantResourceDownloader : NSObject
+ (void)downloadLottieWithURL:zipFileURL:zipFileMD5:unzipTargetPath:completion:;
+ (BOOL)moveFileFromPath:toTargetPath:;
+ (void)downloadPNGWithURL:targetPath:completion:;
+ (id)downloadPNGWithURL:targetPath:;
@end
