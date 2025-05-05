@interface AVCallbackContextRegistry : NSObject
- (id)init;
- (void)dealloc;
- (id)callbackContextForToken:;
- (id)registerCallbackContextObject:;
- (void)unregisterCallbackContextForToken:;
+ (id)sharedCallbackContextRegistry;
@end
