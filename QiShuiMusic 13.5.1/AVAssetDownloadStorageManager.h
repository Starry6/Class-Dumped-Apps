@interface AVAssetDownloadStorageManager : NSObject
- (void)setStorageManagementPolicy:forURL:;
- (id)storageManagementPolicyForURL:;
+ (id)sharedDownloadStorageManager;
@end
