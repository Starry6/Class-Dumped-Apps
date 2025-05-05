@interface BDSuperResolutionTransformer : BDBaseTransformer
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) Q cacheControl;
- (void)setTargetSize:;
- (id)targetSize;
- (unsigned long long)cacheControl;
- (void)setCacheControl:;
+ (void)removeSuperResolutionCache_sync;
+ (void)setConcurrencyExceededStrategy:;
+ (unsigned long long)concurrencyExceededStrategy;
+ (BOOL)enableMultiThread;
+ (unsigned long long)maxCacheCount;
+ (double)maxLevel;
+ (double)minLevel;
+ (void)removeSuperResolutionCache_async;
+ (void)setEnableMultiThread:;
+ (void)setMaxCacheCount:;
+ (void)setMaxConcurrentCount:;
+ (void)setMaxLevel:;
+ (void)setMinLevel:;
+ (id)allocWithZone:;
+ (unsigned long long)maxConcurrentCount;
@end
