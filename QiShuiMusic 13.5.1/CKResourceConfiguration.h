@interface CKResourceConfiguration : NSObject
+ (void)configCKResourceCacheManager;
+ (void)configCKResourceNetworkManager;
+ (BOOL)enableCKCache;
+ (BOOL)enableCKDownloader;
+ (int)getDownloadConcurrentFromAB;
+ (int)getDownloadTimeoutFromAB;
@end
