@interface CSJSDMemoryCache : NSCache
@property (nonatomic) CSJSDImageCacheConfig config;
@property (nonatomic) NSMapTable weakCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWeakCache:;
- (id)init;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)didReceiveMemoryWarning:;
- (void)commonInit;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)removeAllObjects;
- (id)weakCache;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)config;
- (void)removeObjectForKey:;
- (void)setObject:forKey:cost:;
@end
