@interface AWESafeMemoryMap : NSObject
- (id)init;
- (void)setObject:forKey:;
- (void)removeAllObjects;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (id).cxx_construct;
@end
