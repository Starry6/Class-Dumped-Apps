@interface AWEGraphicsCache : NSObject
@property (nonatomic) NSCache cache;
@property (nonatomic) NSMapTable imageWeakTable;
- (id)imageWeakTable;
- (void)cacheImage:forLayer:;
- (id)imageForLayer:;
- (void)setImageWeakTable:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
