@interface FigCameraViewfinderStream : NSObject
- (id)init;
- (void)dealloc;
- (void)close;
- (int)enqueueVideoSampleBuffer:;
- (void)openWithDestination:;
- (void)setDelegate:queue:;
@end
