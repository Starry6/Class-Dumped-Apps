@interface PHAssetUserActivityProperties : PHAssetPropertySet
@property (nonatomic) q syncedPlayCount;
@property (nonatomic) q syncedShareCount;
@property (nonatomic) q syncedViewCount;
@property (nonatomic) q pendingPlayCount;
@property (nonatomic) q pendingShareCount;
@property (nonatomic) q pendingViewCount;
@property (nonatomic) q playCount;
@property (nonatomic) q shareCount;
@property (nonatomic) q viewCount;
- (long long)playCount;
- (id)initWithFetchDictionary:asset:prefetched:;
- (long long)viewCount;
- (long long)shareCount;
- (long long)syncedPlayCount;
- (void)setSyncedPlayCount:;
- (long long)syncedShareCount;
- (void)setSyncedShareCount:;
- (long long)syncedViewCount;
- (void)setSyncedViewCount:;
- (long long)pendingPlayCount;
- (void)setPendingPlayCount:;
- (long long)pendingShareCount;
- (void)setPendingShareCount:;
- (long long)pendingViewCount;
- (void)setPendingViewCount:;
+ (id)propertiesToFetch;
+ (id)propertySetName;
@end
