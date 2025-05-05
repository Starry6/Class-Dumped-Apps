@interface VCVideoRelay : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)enqueueFrame:atTime:cameraStatusBits:;
- (BOOL)registerForVideoFrames:;
- (BOOL)deregisterForVideoFrames:;
+ (id)sharedInstance;
@end
