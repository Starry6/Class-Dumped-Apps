@interface TSPKCacheProcessor : NSObject
@property (nonatomic) <TSPKCacheStore> store;
@property (nonatomic) <TSPKCacheUpdateStrategy> strategy;
- (BOOL)needUpdate:;
- (void)updateCache:newValue:;
- (id)strategy;
- (void)setStore:;
- (id)get:;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)store;
+ (id)initWithStrategy:store:;
@end
