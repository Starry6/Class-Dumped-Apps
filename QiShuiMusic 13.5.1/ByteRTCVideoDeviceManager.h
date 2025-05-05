@interface ByteRTCVideoDeviceManager : NSObject
- (id)initWithVideoDeviceManager:;
- (id)enumerateVideoCaptureDevices;
- (int)getVideoCaptureDevice:;
- (int)setVideoCaptureDevice:;
- (void)dealloc;
@end
