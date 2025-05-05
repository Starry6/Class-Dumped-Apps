@interface BDXTracertCache : NSObject
@property (nonatomic) NSCache sharedCache;
- (id)init;
- (void)setObject:forKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setSharedCache:;
- (id)sharedCache;
+ (id)sharedInstance;
@end
