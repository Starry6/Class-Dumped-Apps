@interface PHConcurrentMapTable : NSObject
- (id)init;
- (void)setObject:forKey:;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (void)_dispatchIsolatedWriteAsync:;
- (void)_dispatchIsolatedWriteSync:;
- (void)_dispatchIsolatedRead:;
- (BOOL)tryRemoveObjectForKey:;
+ (id)mapTable;
@end
