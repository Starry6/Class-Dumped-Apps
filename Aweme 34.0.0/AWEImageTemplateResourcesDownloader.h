@interface AWEImageTemplateResourcesDownloader : NSObject
@property (nonatomic) AWEDavinciWrapper davinciWrapper;
@property (nonatomic) ACCImageTemplateDownloader templateDownloader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldLockTemplateApply:;
- (void)downloadTemplateZipWithMediaID:callback:;
- (void)adjustTemplatePositionByBachAlgorithmWithMediaID:currentImageURI:cropImageInfo:originImageSize:callback:;
- (void)downloadTemplateResources:unzipFilePath:progressChangeCompletion:onError:onCompletion:;
- (void)downloadTemplateResources:unzipFilePath:progressChangeCompletion:onCompletion:;
- (id)combineDownloadedTemplateResourcesLocalCache:unzipFilePath:;
- (id)davinciWrapper;
- (id)templateDownloader;
- (id)getResourceFromNleCache:;
- (void)setDavinciWrapper:;
- (void)setTemplateDownloader:;
- (void).cxx_destruct;
+ (id)templateCacheDir;
+ (void)downloadTemplateZIPWithTemplateID:cacheDir:callback:;
+ (id)getNeedDownloadedTemplateResourcesFromTemplateInfoModel:logSubTag:;
+ (id)errorOfTemplateResourcesDownload;
+ (id)fixedResources;
+ (id)JSONToDictionary:logSubTag:;
+ (BOOL)isValidTemplateResourceTypeWith:;
+ (void)predownloadFixedResourcesWithCallback:;
@end
