@interface IESMMCaptureDeviceManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> prewarmedQueue;
@property (nonatomic) AVCaptureSession prewarmedAVCaptureSession;
@property (nonatomic) NSArray prewarmedFrontDevices;
@property (nonatomic) NSArray prewarmedBackDevices;
@property (nonatomic) BOOL isPrewarmed;
- (void)p_preheatCaptureResources;
- (id)p_videoDeviceWithPosition:;
- (id)p_videoDeviceWithPosition:deviceTypes:;
- (void)prewarmVideoDevice;
- (id)prewarmedAVCaptureSession;
- (id)prewarmedBackDevices;
- (id)prewarmedFrontDevices;
- (id)prewarmedQueue;
- (void)setPrewarmedAVCaptureSession:;
- (void)setPrewarmedBackDevices:;
- (void)setPrewarmedFrontDevices:;
- (void)setPrewarmedQueue:;
- (id)videoDeviceWithPosition:;
- (id)videoDeviceWithPosition:deviceTypes:;
- (id)init;
- (void)preheatCaptureResources;
- (void)setIsPrewarmed:;
- (void).cxx_destruct;
- (BOOL)isPrewarmed;
- (id)captureSession;
+ (id)sharedInstance;
@end
