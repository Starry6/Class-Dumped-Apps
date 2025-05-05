@interface CameraOutputCallback : NSObject
@property (nonatomic) ^v ctx;
@property (nonatomic) ^{DarwinCameraRecorder=^^?B^{Context}IIII@[256c]BBBB@@@{?=qiIq}idQI} recorder;
@property (nonatomic) NSObject<OS_dispatch_queue> videoDataOutputQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cameraDidStart:;
- (void)cameraDidPause:;
- (void)cameraDidDispose:;
- (void)cameraDidOutputSampleBuffer:pageID:;
- (void)cameraDidResume:;
- (void)cameraDidStop:;
- (void)cameraDidZoom:;
- (void)setVideoDataOutputQueue:;
- (id)videoDataOutputQueue;
- (void)setCtx:;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
- (id)ctx;
@end
