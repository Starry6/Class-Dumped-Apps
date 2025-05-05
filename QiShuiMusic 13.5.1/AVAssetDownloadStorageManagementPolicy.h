@interface AVAssetDownloadStorageManagementPolicy : NSObject
@property (nonatomic) NSString priority;
@property (nonatomic) NSDate expirationDate;
- (id)init;
- (void)setPriority:;
- (void)dealloc;
- (void)setExpirationDate:;
- (unsigned long long)hash;
- (id)expirationDate;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)priority;
- (id)_policyDictionary;
- (void)_setPolicyDictionary:;
@end
