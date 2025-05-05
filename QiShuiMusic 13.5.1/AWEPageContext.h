@interface AWEPageContext : AWEContextStore
- (void)addKey:handler:;
- (void)postForKey:;
- (void)removeHandlersForKey:;
- (void)removeKey:handler:;
@end
