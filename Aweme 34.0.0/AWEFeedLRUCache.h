@interface AWEFeedLRUCache : NSObject
- (BOOL)containsObjectForKey:;
- (void)dealloc;
- (unsigned long long)totalCount;
- (void)removeAllObjects;
- (id)initWithMaxCount:;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (id)allKeys;
- (id)allValues;
- (void)setObject:forKey:;
@end
