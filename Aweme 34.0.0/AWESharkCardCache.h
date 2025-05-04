@interface AWESharkCardCache : NSObject
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) NSString scene;
- (id)__cacheKeyWithUrl:cardType:;
- (BOOL)hasCardCacheForUrl:cardType:;
- (id)cardCacheForUrl:cardType:;
- (void)setCardCache:url:cardType:;
- (void)setCache:;
- (void)setScene:;
- (id)cache;
- (id)scene;
- (void).cxx_destruct;
- (id)initWithScene:;
@end
