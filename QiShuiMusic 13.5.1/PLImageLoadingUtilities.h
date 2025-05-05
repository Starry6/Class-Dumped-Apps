@interface PLImageLoadingUtilities : NSObject
+ (void)imageForAsset:withFormat:allowPlaceholder:optimalSourcePixelSize:networkAccessAllowed:networkAccessForced:trackCPLDownload:isCanceledHandler:completion:sync:;
+ (id)synchronousImageForAsset:withFormat:allowPlaceholder:optimalSourcePixelSize:networkAccessAllowed:networkAccessForced:trackCPLDownload:outImageProperties:outImageDataInfo:outCPLDownloadContext:;
+ (BOOL)canAccessImageForAsset:;
+ (id)synchronousImageForAsset:withFormat:allowPlaceholder:outImageProperties:outDeliveredPlaceholder:;
+ (void)_assetsdImageForAsset:withFormat:allowPlaceholder:optimalSourcePixelSize:networkAccessAllowed:trackCPLDownload:sync:isCanceledHandler:completion:;
@end
