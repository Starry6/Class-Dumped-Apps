@interface ISDeferredDealloc : NSObject
- (id)init;
- (void)dealloc;
- (void)_performDeferredDealloc:withDelay:;
- (void)_performDeferredDealloc:;
+ (id)sharedInstance;
@end
