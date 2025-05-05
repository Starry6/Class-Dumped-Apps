@interface FigCameraViewfinder : NSObject
@property (nonatomic) FigCameraViewfinderSession delegateActiveViewfinderSession;
@property (nonatomic) <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void)dealloc;
- (id)delegateActiveViewfinderSession;
- (void)stop;
- (void)setDelegateActiveViewfinderSession:;
- (id)delegate;
- (void)startWithOptions:;
- (id)queue;
- (void)setDelegate:queue:;
+ (id)cameraViewfinder;
@end
