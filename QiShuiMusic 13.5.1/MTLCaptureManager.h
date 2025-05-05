@interface MTLCaptureManager : NSObject
@property (nonatomic) <MTLCaptureScope> defaultCaptureScope;
@property (nonatomic) BOOL isCapturing;
- (id)newCaptureScopeWithDevice:;
- (void)stopCapture;
- (void)dealloc;
- (id)newCaptureScopeWithCommandQueue:;
- (void)startCaptureWithScope:;
- (void)setDefaultCaptureScope:;
- (BOOL)startCaptureWithDescriptor:error:;
- (BOOL)isCapturing;
- (BOOL)supportsDestination:;
- (void)startCaptureWithDevice:;
- (id)defaultCaptureScope;
- (void)startCaptureWithCommandQueue:;
+ (id)sharedCaptureManager;
@end
