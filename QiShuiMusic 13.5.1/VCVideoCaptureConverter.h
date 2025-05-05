@interface VCVideoCaptureConverter : NSObject
@property (nonatomic) I sourceFramerate;
@property (nonatomic) I destinationFramerate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:;
- (BOOL)processFrame:;
- (BOOL)onVideoFrame:frameTime:attribute:;
- (void)thermalLevelDidChange:;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:;
- (void)cameraAvailabilityDidChange:;
- (void)sourceFrameRateDidChange:;
- (void)setSourceFramerate:;
- (void)setDestinationFramerate:;
- (void)updateThrottleRate;
- (unsigned int)sourceFramerate;
- (unsigned int)destinationFramerate;
@end
