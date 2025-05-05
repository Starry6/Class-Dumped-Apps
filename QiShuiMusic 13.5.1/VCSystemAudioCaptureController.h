@interface VCSystemAudioCaptureController : VCObject
@property (nonatomic) NSDictionary reportingStats;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithConfig:;
- (void)didUpdateBasebandCodec:;
- (void)startClient:;
- (void)stopClient:;
- (void)updateClient:direction:;
- (void)setupLogPrefixWithConfig:;
- (id)dispatchQueueNameWithConfig:;
+ (BOOL)isValidConfiguration:;
+ (id)captureServerConfigForAudioConfig:forClient:;
+ (int)captureSourceForTypePreSpatialSessionType:;
+ (int)captureSourceForTypeProcessID:;
+ (int)captureSourceForSystemAudioCaptureControllerConfig:;
@end
