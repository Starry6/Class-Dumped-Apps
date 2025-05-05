@interface PHDuplicateDetection : NSObject
+ (BOOL)assetsArePendingForDuplicateMergeProcessing:inPhotoLibrary:;
+ (void)mergeDuplicateAssetsWithLocalIdentifiers:inPhotoLibrary:completionHandler:;
@end
