@interface AWEDataLayerLRUList : NSObject
- (void)cleanIfNeeded:;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:;
- (void)setObject:forKeyedSubscript:;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:;
+ (id)listWithCapacity:useLock:;
+ (id)listWithCapacity:;
@end
