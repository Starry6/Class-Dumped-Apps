@interface PFCameraViewfinderSessionWatcher : NSObject
@property (nonatomic) BOOL isCameraRunning;
@property (nonatomic) <PFCameraViewfinderSessionWatcherDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)stopWatching;
- (BOOL)isCameraRunning;
- (id)delegate;
- (void)cameraViewfinder:viewfinderSessionDidEnd:;
- (void)startWatching;
- (void).cxx_destruct;
- (void)cameraViewfinderSessionWillBegin:;
- (id)initWithDispatchQueue:delegate:;
- (void)cameraViewfinder:viewfinderSessionDidBegin:;
@end
