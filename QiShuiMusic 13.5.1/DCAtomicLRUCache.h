@interface DCAtomicLRUCache : DCLRUCache
- (void)setObject:forKey:;
- (id)allKeys;
- (id)objectForKey:;
- (void)removeObjectForKey:;
@end
