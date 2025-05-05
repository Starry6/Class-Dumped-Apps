@interface PLCloudStorageInfo : NSObject
@property (nonatomic) q totalBytes;
@property (nonatomic) q availableBytes;
@property (nonatomic) q usedBytes;
@property (nonatomic) q cameraRollBackupBytes;
@property (nonatomic) q iCloudPhotosBytes;
@property (nonatomic) BOOL hasMaxQuotaTier;
- (long long)availableBytes;
- (long long)totalBytes;
- (long long)usedBytes;
- (id)description;
- (id)initWithTotalQuotaBytes:totalAvailableBytes:totalUsedBytes:cameraRollBackupBytes:iCloudPhotosSize:hasMaxQuotaTier:;
- (long long)cameraRollBackupBytes;
- (long long)iCloudPhotosBytes;
- (BOOL)hasMaxQuotaTier;
+ (id)storageInfoWithTotal:available:used:cameraRollBackupBytes:iCloudPhotosSize:hasMaxQuotaTier:;
@end
