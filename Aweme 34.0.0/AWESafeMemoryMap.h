@interface AWESafeMemoryMap : NSObject
- (id)init;
- (void)removeAllObjects;
- (id).cxx_construct;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (void)removeObject:forKey:;
- (void)setObject:forKey:;
@end
