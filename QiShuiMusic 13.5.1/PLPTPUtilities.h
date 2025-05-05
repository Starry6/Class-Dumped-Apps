@interface PLPTPUtilities : NSObject
+ (id)pathForSidecar:onAsset:;
+ (void)enumerateAvailableSidecarFilesOnAsset:usingBlock:;
+ (void)enumerateAvailableSidecarFilesOnAsset:withFileManager:usingBlock:;
+ (BOOL)shouldExpungeAsset:;
+ (BOOL)shouldExpungeAsset:withFileManager:;
@end
