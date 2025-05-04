@interface AWESpecialCardCachePool : NSObject
@property (nonatomic) NSMutableDictionary caches;
- (void)setCaches:;
- (void)cacheItem:forBusinessID:;
- (id)getItemForBusinessID:;
- (void)removeAllItem;
- (id)caches;
- (void).cxx_destruct;
@end
