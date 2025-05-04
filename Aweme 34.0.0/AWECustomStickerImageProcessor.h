@interface AWECustomStickerImageProcessor : NSObject
+ (void)compressInputStickerOriginData:isGIF:limitConfig:completionBlock:;
+ (BOOL)supportCustomStickerForDataUTI:isImageAlbumEdit:;
+ (void)saveAndSampleStickerImage:usePNG:filePrefix:completionBlock:;
+ (id)requestProcessedStickerImage:completion:;
+ (id)extractInputDataFromImage:usePNG:;
+ (id)regenerateTheCustomImageForPath:;
@end
