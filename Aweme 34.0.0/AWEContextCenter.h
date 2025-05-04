@interface AWEContextCenter : AWEContextStore
- (void)postForKey:;
- (void)removeKey:handler:;
- (void)addKey:withDealloc:handler:;
- (void)removeHandlersForKey:withDealloc:;
- (void)removeHandlersWithDealloc:;
+ (id)defaultCenter;
@end
