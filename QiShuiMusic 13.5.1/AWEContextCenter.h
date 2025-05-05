@interface AWEContextCenter : AWEContextStore
- (void)addKey:withDealloc:handler:;
- (void)postForKey:;
- (void)removeHandlersForKey:withDealloc:;
- (void)removeHandlersWithDealloc:;
- (void)removeKey:handler:;
+ (id)defaultCenter;
@end
