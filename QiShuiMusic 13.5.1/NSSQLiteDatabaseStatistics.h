@interface NSSQLiteDatabaseStatistics : NSObject
@property (nonatomic) q cacheMissPages;
@property (nonatomic) q cacheHitPages;
@property (nonatomic) q cacheSpillPages;
@property (nonatomic) q totalCachePages;
@property (nonatomic) q pageSize;
- (id)copy;
- (id)description;
- (id)copyWithZone:;
- (id)initWithPageSize:;
- (long long)totalCachePages;
- (id)databaseStatisticsBySubtracting:;
- (long long)cacheHitPages;
- (long long)cacheMissPages;
- (long long)cacheSpillPages;
- (long long)pageSize;
@end
