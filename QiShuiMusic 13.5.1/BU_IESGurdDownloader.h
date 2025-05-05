@interface BU_IESGurdDownloader : NSObject
+ (void)cancelDownloadWithIdentity:;
+ (void)downloadPackageWithIdentity:URLStrings:completion:;
@end
