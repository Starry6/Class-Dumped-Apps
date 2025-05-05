@interface VCAggregatorSecondDisplay : VCAggregator
@property (nonatomic) NSString channelSequence;
@property (nonatomic) NSString previousChannelSequence;
- (void)dealloc;
- (id)channelSequence;
- (id)initWithDelegate:;
- (void)processEventWithCategory:type:payload:;
- (void)flushCurrentSegment;
- (id)aggregatedSegmentReport:;
- (id)sessionFECReport;
- (void)updateVideoFECStats:;
- (void)processRealtimeStats:;
- (void)updateSenderVideoStreamConfiguration:;
- (void)updateReceiverVideoStreamConfiguration:;
- (void)setChannelSequence:;
- (id)previousChannelSequence;
- (void)setPreviousChannelSequence:;
- (void)saveCallSegmentHistory;
- (void)initAdaptiveLearningWithParameters:;
- (id)aggregatedSegmentQRReport;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;
@end
