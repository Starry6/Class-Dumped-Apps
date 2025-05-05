@interface CameraAudioDelegate : NSObject
@property (nonatomic) ^{DarwinCameraRecorder=^^?B^{Context}IIII@[256c]BBBB@@@{?=qiIq}idQI} recorder;
@property (nonatomic) NSObject<OS_dispatch_queue> audioDataOutputQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioDataOutputQueue;
- (void)setAudioDataOutputQueue:;
- (void)captureOutput:didOutputSampleBuffer:fromConnection:;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
@end
