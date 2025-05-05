@interface SCNMTLBuffer : NSObject
@property (nonatomic) q usedCount;
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q offset;
@property (nonatomic) ^v contents;
@property (nonatomic) @ dataSource;
- (void)setBuffer:;
- (void)setDataSource:;
- (void)setOffset:;
- (void)dealloc;
- (id)buffer;
- (id)contents;
- (long long)usedCount;
- (unsigned long long)offset;
- (void)setUsedCount:;
- (id)dataSource;
- (void)incrementUsedCount;
- (long long)decrementUsedCount;
@end
