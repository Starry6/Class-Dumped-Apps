@interface PRLikenessCacheContext : NSObject
@property (nonatomic) Q cacheSize;
@property (nonatomic) BOOL circular;
@property (nonatomic) double scale;
@property (nonatomic) BOOL forceDecode;
- (void)setCacheSize:;
- (unsigned long long)cacheSize;
- (id)init;
- (void)setScale:;
- (void)setCircular:;
- (double)scale;
- (BOOL)circular;
- (BOOL)forceDecode;
- (void)setForceDecode:;
+ (id)contextWithCacheSize:;
@end
