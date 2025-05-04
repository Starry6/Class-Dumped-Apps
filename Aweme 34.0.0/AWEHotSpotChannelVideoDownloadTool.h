@interface AWEHotSpotChannelVideoDownloadTool : NSObject
+ (void)preloadAweme:percentage:successBlock:failureBlock:cancelBlock:;
+ (void)removeDownloadVideoWithAweme:;
+ (id)videoBSModelWithAweme:;
+ (id)playAddrURLModelWithAweme:bitrateModel:;
+ (void)initPreCacheModelWithAweme:playAddrURLModel:bitrateModel:;
+ (unsigned long long)downloadSizeWithPlayAddrURLModel:percentage:;
+ (void)downloadVideoWithAweme:kbSize:playAddrURLModel:successBlock:failureBlock:cancelBlock:;
+ (void)preloadImageWithAweme:;
@end
