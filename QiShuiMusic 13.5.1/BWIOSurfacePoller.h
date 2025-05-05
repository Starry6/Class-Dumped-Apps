@interface BWIOSurfacePoller : NSObject
- (id)init;
- (void)dealloc;
+ (void)trackSurface:useCountIsZeroHandler:;
@end
