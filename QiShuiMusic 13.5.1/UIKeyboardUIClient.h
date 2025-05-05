@interface UIKeyboardUIClient : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)snapshotViewForOptions:;
- (void)setKeyboardAlpha:;
- (void)_initConnectionIfNeeded;
+ (id)sharedInstance;
+ (id)serviceInterface;
@end
