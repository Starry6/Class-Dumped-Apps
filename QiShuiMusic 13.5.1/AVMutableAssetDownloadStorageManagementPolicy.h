@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy
@property (nonatomic) NSString priority;
@property (nonatomic) NSDate expirationDate;
- (void)setPriority:;
- (void)setExpirationDate:;
- (id)expirationDate;
- (id)copyWithZone:;
- (id)priority;
@end
