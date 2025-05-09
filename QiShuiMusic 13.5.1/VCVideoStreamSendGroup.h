@interface VCVideoStreamSendGroup : VCMediaStreamSendGroup
@property (nonatomic) NSInteger captureFrameRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stopCapture;
- (void)dealloc;
- (id)initWithConfig:;
- (id)startCapture;
- (void)didStart;
- (void)collectAndLogChannelMetrics:;
- (id)willStart;
- (void)updateActiveMediaStreamIDs:withTargetBitrate:mediaBitrates:;
- (id)activeStreamKeys;
- (BOOL)onVideoFrame:frameTime:attribute:;
- (void)redundancyController:redundancyVectorDidChange:;
- (BOOL)generateKeyFrameWithStreamID:;
- (int)captureFrameRate;
- (void)setCaptureFrameRate:;
- (void)redundancyController:redundancyPercentageDidChange:;
- (void)vcMediaStreamDidRTPTimeOut:;
- (void)vcMediaStreamDidRTCPTimeOut:;
- (void)vcMediaStreamDidDecryptionTimeOut:;
- (void)redundancyController:redundancyIntervalDidChange:;
- (id)setupRedundancyController;
- (void)thermalLevelDidChange:;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:;
- (void)cameraAvailabilityDidChange:;
- (void)sourceFrameRateDidChange:;
- (void)frameRateIsBeingThrottled:thermalLevelDidChange:powerLevelDidChange:;
- (long long)maxCaptureResolution;
- (int)maxCaptureCameraFrameRate;
- (void)setUplinkBitrateCapCell:;
- (void)setUplinkBitrateCapWifi:;
- (void)registerForVideoCapture:;
- (void)deregisterForVideoCapture;
- (BOOL)enableRedundancy:;
- (BOOL)shouldCompoundListIgnoreStream:streamConfig:activeStreamIds:;
- (id)streamDescriptionForMediaStreamConfig:;
- (BOOL)shouldSubscribeToStreamID:peerSubscribedStreams:;
- (BOOL)updateUplinkStreamsForPeerSubscribedStreams:;
- (void)setActiveConnection:uplinkBitrateCap:;
- (void)updateBandwidthAllocatorStreamTokenState;
- (void)setupVideoPriority;
- (void)controller:didChangeActiveVideoStreams:;
- (void)updateSendSampleRTPTimestamp:sampleRate:systemTime:;
- (BOOL)setupRedundancySettings;
- (void)setupPayloadTypes;
- (void)cleanupRedundancySettings;
- (int)maxCaptureFrameRate;
- (BOOL)setupUplinkVideoStreamController;
- (void)updateVideoStreamAndProcessFrame:sampleBuffer:lastSentAudioHostTime:lastSentAudioSampleTime:frameTime:attribute:;
- (void)processVideoPriority;
- (void)processVideoEventQueue;
- (void)flushVideoRedundancyEventQueue;
- (id)getCaptureEncodingSize;
- (unsigned int)getPixelFormat;
- (id)registerForScreenCapture;
- (void)deregisterForScreenCapture;
- (void)updateSuspendedState;
- (id)captureConfigForScreenShare;
- (void)registerConfigForScreenShare;
- (void)registerClientForScreenShare;
- (void)deregisterClientForScreenShare;
- (void)computeMaxScreenCaptureSize;
- (unsigned long long)maxStreamFrameRate;
@end
