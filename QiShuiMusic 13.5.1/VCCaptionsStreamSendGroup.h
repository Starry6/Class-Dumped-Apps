@interface VCCaptionsStreamSendGroup : VCMediaStreamSendGroup
@property (nonatomic) BOOL captionsSupported;
@property (nonatomic) BOOL captionsEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) NSInteger deviceRole;
@property (nonatomic) BOOL isPowerSpectrumEnabled;
- (id)stopCapture;
- (void)dealloc;
- (id)initWithConfig:;
- (void)setMuted:;
- (BOOL)isMuted;
- (id)startCapture;
- (BOOL)captionsEnabled;
- (void)enableCaptions:;
- (void)didStop;
- (void)setReportingAgent:;
- (BOOL)setDeviceRole:operatingMode:;
- (int)deviceRole;
- (BOOL)isPowerSpectrumEnabled;
- (void)setPowerSpectrumEnabled:;
- (void)collectAndLogChannelMetrics:;
- (id)willStart;
- (void)didUpdateCaptions:;
- (void)didEnableCaptions:error:;
- (void)didDisableCaptions:error:;
- (void)didStartCaptioningWithReason:streamToken:;
- (void)didStopCaptioningWithReason:streamToken:;
- (void)registerCaptionsEventDelegate:;
- (void)setCaptionsLocale:;
- (BOOL)captionsSupported;
- (void)updateActiveMediaStreamIDs:withTargetBitrate:mediaBitrates:;
- (id)activeStreamKeys;
- (id)captionsDelegate;
- (void)transmitTranscription:;
- (void)onVideoFrame:frameTime:attribute:;
@end
