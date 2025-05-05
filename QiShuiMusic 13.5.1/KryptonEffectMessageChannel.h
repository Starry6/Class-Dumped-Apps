@interface KryptonEffectMessageChannel : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)addCallback:;
- (void)destroy;
- (BOOL)removeCallback;
@end
