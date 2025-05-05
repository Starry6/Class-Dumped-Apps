@interface GlobalMetrics : NSObject
@property (nonatomic) q cacheCount;
@property (nonatomic) Q dbFileSizeBytes;
@property (nonatomic) q cacheTotalSizeBytes;
@property (nonatomic) BOOL isTriggerClean;
@property (nonatomic) I dbAge;
- (unsigned long long)dbFileSizeBytes;
- (long long)cacheCount;
- (long long)cacheTotalSizeBytes;
- (unsigned int)dbAge;
- (id)initWithCacheCount:dbFileSizeBytes:cacheTotalSizeBytes:isTriggerClean:dbAge:;
- (BOOL)isTriggerClean;
- (void)setCacheCount:;
- (void)setCacheTotalSizeBytes:;
- (void)setDbAge:;
- (void)setDbFileSizeBytes:;
- (void)setIsTriggerClean:;
@end
