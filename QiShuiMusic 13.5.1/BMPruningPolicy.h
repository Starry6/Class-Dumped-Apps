@interface BMPruningPolicy : NSObject
@property (nonatomic) BOOL pruneOnAccess;
@property (nonatomic) BOOL filterByAgeOnRead;
@property (nonatomic) double maxAge;
@property (nonatomic) Q maxStreamSize;
@property (nonatomic) Q maxEventCount;
- (unsigned long long)maxStreamSize;
- (id)init;
- (unsigned long long)maxEventCount;
- (void)setPruneOnAccess:;
- (unsigned long long)hash;
- (id)initPruneOnAccess:filterByAgeOnRead:maxAge:maxStreamSize:;
- (double)maxAge;
- (BOOL)pruneOnAccess;
- (id)initPruneOnAccess:filterByAgeOnRead:maxAge:maxStreamSize:maxEventCount:;
- (void)setFilterByAgeOnRead:;
- (void)setMaxAge:;
- (void)setMaxEventCount:;
- (BOOL)filterByAgeOnRead;
- (void)setMaxStreamSize:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)new;
@end
