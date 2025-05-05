@interface BWIOSurfaceTracking : NSObject
- (id)init;
- (void)dealloc;
+ (void)trackPixelBuffer:surfaceUseCountIsZeroHandler:;
+ (void)noteSurfaceIDInUse:byClient:;
+ (void)noteSurfaceIDNoLongerInUse:byClient:;
@end
