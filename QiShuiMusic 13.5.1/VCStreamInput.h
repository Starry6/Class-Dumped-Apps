@interface VCStreamInput : VCObject
@property (nonatomic) NSDictionary reportingStats;
@property (nonatomic) NSNumber streamInputID;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isStarted;
- (void)dealloc;
- (void)invalidate;
- (id)streamFormat;
- (id)reportingStats;
- (id)initWithStreamInputID:format:delegate:delegateQueue:remoteQueue:;
- (void)thermalLevelDidChange:;
- (id)streamInputID;
- (void)didStartStreamInputCaptureSource;
- (void)didStopStreamInputCaptureSource;
- (void)didSuspendStreamInputCaptureSource;
- (void)didResumeStreamInputCaptureSource;
- (BOOL)isEqualFormat:;
- (BOOL)createRemoteReceiveQueue:;
@end
