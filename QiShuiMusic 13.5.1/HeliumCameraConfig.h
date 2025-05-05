@interface HeliumCameraConfig : NSObject
@property (nonatomic) NSString resolution;
@property (nonatomic) NSString devicePosition;
@property (nonatomic) NSObject<OS_dispatch_queue> js_queue;
- (id)js_queue;
- (id)realFrameSize;
- (void)setJs_queue:;
- (id)devicePosition;
- (void)setResolution:;
- (id)resolution;
- (void)setDevicePosition:;
- (void).cxx_destruct;
@end
