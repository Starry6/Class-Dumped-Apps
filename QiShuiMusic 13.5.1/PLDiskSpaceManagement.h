@interface PLDiskSpaceManagement : NSObject
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:shouldFreeSpace:shouldKeepRecentlyViewedAssets:fromPhotoLibrary:;
+ (unsigned long long)_scanFilesInPhotoLibrary:fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:bytesToPurge:;
+ (unsigned long long)_scanFilesInPhotoLibrary:fromCloudSharingCacheDataDirectoryShouldFreeSpace:bytesToPurge:;
+ (unsigned long long)_scanFilesInPhotoLibrary:fromPhotoMetadataDirectoryShouldFreeSpace:bytesToPurge:skipAssets:;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:shouldFreeSpace:bytesToPurge:;
+ (long long)_processCloudSharedAsset:shouldFreeSpace:;
@end
