@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation
@property (nonatomic) BOOL didReceiveVideo;
- (void)dealloc;
- (double)owrd;
- (void)setEnableRateAdaptation:maxBitrate:minBitrate:adaptationInterval:;
- (void)updateRTPReceiveWithTimestamp:sampleRate:time:size:endOfFrame:;
- (id)initWithRTPHandle:reportingAgent:receiverStats:dumpID:reportingParentID:statisticsCollector:lowTimestampPrecision:;
- (void)startFeedbackSource;
- (void)stopFeedbackSource;
- (void)sendRateControlFeedback;
- (void)updateRateControlInfoWithStatisticsMessage:;
- (BOOL)didReceiveVideo;
- (void)setDidReceiveVideo:;
@end
