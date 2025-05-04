@interface AWEDanmakuResourcesUtil : NSObject
+ (void)showToast:;
+ (id)directoryNameWithURL:;
+ (BOOL)isHandledResourcesWithDirectory:;
+ (id)createDanmakuResourcesModel;
+ (id)createDanmakuResourcesModelFromModel:;
+ (void)downloadWithModel:completion:;
+ (void)deleteWithModel:;
+ (void)cleanResource;
+ (id)localFullPathWithUrl:;
+ (id)danmakuResourcesPath;
+ (id)localFileUrls;
+ (void)trackResourceCoverageWithConfigSet:localSet:;
+ (void)logWithEvent:message:;
+ (void)downloadZipWithModel:retryTimes:completion:;
+ (void)downloadFileWithModel:pathExtension:retryTimes:completion:;
+ (void)trackDownloadStartWithParams:;
+ (void)trackDownloadFailedWithParams:;
+ (void)handleZipWithModel:retryTimes:completion:;
+ (BOOL)md5CheckWithModel:;
+ (void)trackDownloadSucceedWithParams:;
+ (void)markResourcesHandledWithDirectory:;
+ (id)md5WithFilePath:;
+ (BOOL)removeItemAtPath:error:;
@end
