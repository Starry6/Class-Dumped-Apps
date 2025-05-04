@interface AWEMediaDownloadHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)checkIfCanDownloadWithOptions:;
+ (void)copyLinkIfPreventDownloadTypeReviewing:;
+ (void)saveVideoToAlbum:needAsset:completion:;
+ (void)cleanCacheIfNeeded;
+ (void)p_recordControlServerDiffWithMessage:;
+ (id)formatedFreeSpaceWithHomePath;
+ (long long)freeDiskSpaceInBytesWithHomePath;
+ (float)totalDiskSpaceInBytes;
+ (id)_humanReadableStringFromBytes:;
+ (long long)freeDiskSpaceInBytes;
+ (id)formatedTotalSpace;
+ (id)formatedFreeSpace;
+ (void)logSaveFailWithMessage:error:urlList:;
+ (id)forbiddenDownloadMessageWithOptions:;
@end
