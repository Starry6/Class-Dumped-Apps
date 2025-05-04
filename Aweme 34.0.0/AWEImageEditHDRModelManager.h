@interface AWEImageEditHDRModelManager : NSObject
+ (BOOL)didLensHDRResourcesDownloaded;
+ (void)downloadHDRResourceIfNeededWithCompletion:;
+ (BOOL)enableImageLensHDR;
+ (id)lensHDRFilePath;
+ (id)lensHDRModelNames;
+ (void)p_downloadHDRResourceIfNeededWithCompletion:;
+ (id)p_hdrModelsMapping;
@end
