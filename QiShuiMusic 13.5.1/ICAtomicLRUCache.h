@interface ICAtomicLRUCache : ICLRUCache
- (void)setObject:forKey:;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:;
- (void)removeObjectForKey:;
@end
