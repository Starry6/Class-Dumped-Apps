@interface AWEPageContext : AWEContextStore
- (void)addKey:handler:;
- (void)postForKey:;
- (void)removeKey:handler:;
- (void)removeHandlersForKey:;
@end
