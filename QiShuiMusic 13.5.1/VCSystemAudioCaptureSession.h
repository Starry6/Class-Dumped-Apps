@interface VCSystemAudioCaptureSession : NSObject
- (void)dealloc;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithConfiguration:;
- (void)cleanupQueue:;
- (BOOL)setupAudioIOWithConfig:;
- (BOOL)createAudioBufferPool;
- (void)resetAudioBufferPool;
@end
