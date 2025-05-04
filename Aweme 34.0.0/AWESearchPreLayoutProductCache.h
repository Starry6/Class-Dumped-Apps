@interface AWESearchPreLayoutProductCache : NSObject
@property (nonatomic) NSCache sharedCache;
@property (nonatomic) BOOL hasTriggeredPrelayout;
- (void)clearAllCache;
- (BOOL)hasTriggeredPrelayout;
- (void)setHasTriggeredPrelayout:;
- (id)getKeyFromSchema:;
- (id)productForKey:;
- (void)setProduct:forKey:;
- (id)sharedCache;
- (void)setSharedCache:;
- (void).cxx_destruct;
- (void)removeForKey:;
+ (id)sharedInstance;
@end
