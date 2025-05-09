@interface MultiwayCall : NSObject
@property (nonatomic) NSString remoteParticipantID;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isVideoEnabled;
@property (nonatomic) BOOL isScreenEnabled;
@property (nonatomic) BOOL isExpanseEnabled;
@property (nonatomic) BOOL isFullSize;
@property (nonatomic) BOOL hasWebParticipant;
@property (nonatomic) NSInteger duration;
@property (nonatomic) NSInteger adjustedDuration;
@property (nonatomic) NSMutableDictionary streamGroups;
@property (nonatomic) I downlinkTargetBitrateSwitchCount;
@property (nonatomic) I timeToHearFirstRemoteAudioFrame;
@property (nonatomic) I averageJitterbufferLength;
@property (nonatomic) double connectionTime;
@property (nonatomic) I decryptionTimeoutCount;
@property (nonatomic) NSInteger mkmRecoveryAttemptCount;
@property (nonatomic) NSInteger startDate;
@property (nonatomic) BOOL reportRateControlExperimentRemote;
@property (nonatomic) C rateControlExperimentVersionRemote;
@property (nonatomic) C rateControlExperimentGroupIndexRemote;
@property (nonatomic) NSMutableDictionary streamGroupStats;
@property (nonatomic) BOOL isRTXTelemetryAvailable;
@property (nonatomic) Q nacksSent;
@property (nonatomic) Q nacksFulfilled;
@property (nonatomic) Q nacksFulfilledOnTime;
@property (nonatomic) Q lateFramesScheduledWithRTXCount;
@property (nonatomic) Q assembledFramesWithRTXPacketsCount;
@property (nonatomic) Q failedToAssembleFramesWithRTXPacketsCount;
- (int)startDate;
- (void)dealloc;
- (void)setStartDate:;
- (void)setConnectionTime:;
- (BOOL)isLive;
- (double)connectionTime;
- (void)setDuration:;
- (BOOL)isExpanseEnabled;
- (int)duration;
- (void)setIsAudioEnabled:;
- (BOOL)isAudioEnabled;
- (id)remoteParticipantID;
- (BOOL)isScreenEnabled;
- (BOOL)isVideoEnabled;
- (BOOL)isVideoDegraded;
- (id)streamGroups;
- (void)setIsVideoEnabled:;
- (int)adjustedDuration;
- (void)setAdjustedDuration:;
- (unsigned int)RTPeriod;
- (BOOL)isRTXTelemetryAvailable;
- (void)setIsRTXTelemetryAvailable:;
- (unsigned long long)nacksSent;
- (void)setNacksSent:;
- (unsigned long long)nacksFulfilled;
- (void)setNacksFulfilled:;
- (unsigned long long)nacksFulfilledOnTime;
- (void)setNacksFulfilledOnTime:;
- (unsigned long long)lateFramesScheduledWithRTXCount;
- (void)setLateFramesScheduledWithRTXCount:;
- (unsigned long long)assembledFramesWithRTXPacketsCount;
- (void)setAssembledFramesWithRTXPacketsCount:;
- (unsigned long long)failedToAssembleFramesWithRTXPacketsCount;
- (void)setFailedToAssembleFramesWithRTXPacketsCount:;
- (void)markHandshakeStart:;
- (double)markHandshakeCompletion:;
- (id)streamGroupStats;
- (id)initCallWithRemoteParticipantID:;
- (void)finalizeCall:;
- (void)processDownlinkRateChange:;
- (void)processActualBitrateRateChange:;
- (unsigned long long)downlinkRateSum;
- (unsigned int)downlinkRateUpdateCounter;
- (unsigned long long)actualBitrateSum;
- (unsigned int)actualBitrateUpdateCounter;
- (unsigned short)significantVideoStallCount:;
- (id)videoDegradedTotalCounter:;
- (void)incrementVideoStreamSwitchCounterForStreamGroup:;
- (void)incrementAudioStreamSwitchCounterForStreamGroup:;
- (double)significantVideoStallTotalTime:;
- (unsigned short)audioErasureCount:;
- (unsigned short)maxAudioErasureCount:;
- (unsigned short)maxVideoStallCount:;
- (double)avgJBDelay:;
- (double)avgJBTargetSizeChanges:;
- (unsigned short)maxJBTargetSizeChanges:;
- (unsigned short)minVideoFrameRate:;
- (double)audioErasureTotalTime:;
- (void)updatePerfTimingWithFirstVideoFrameProcessingDelta:firstMediaReceivedDelta:firstMKIDelta:totalMediaStallSaveDelta:streamGroupID:;
- (void)processVideoDegraded:timestamp:;
- (void)processVideoDegraded:streamGroup:timestamp:;
- (void)addVideoStreamGroupTelemetry:streamGroupID:;
- (void)addAudioStreamGroupTelemetry:streamGroupID:;
- (void)addRTXStreamGroupTelemetry:streamGroupID:;
- (void)addStreamGroupTelemetry:;
- (void)addControlChannelTelemetry:timestamp:;
- (void)setIsScreenEnabled:;
- (void)setIsExpanseEnabled:;
- (BOOL)isFullSize;
- (void)setIsFullSize:;
- (BOOL)hasWebParticipant;
- (void)setHasWebParticipant:;
- (unsigned int)downlinkTargetBitrateSwitchCount;
- (void)setDownlinkTargetBitrateSwitchCount:;
- (unsigned int)timeToHearFirstRemoteAudioFrame;
- (void)setTimeToHearFirstRemoteAudioFrame:;
- (unsigned int)averageJitterbufferLength;
- (void)setAverageJitterbufferLength:;
- (unsigned int)decryptionTimeoutCount;
- (void)setDecryptionTimeoutCount:;
- (int)mkmRecoveryAttemptCount;
- (void)setMkmRecoveryAttemptCount:;
- (BOOL)reportRateControlExperimentRemote;
- (void)setReportRateControlExperimentRemote:;
- (unsigned char)rateControlExperimentVersionRemote;
- (void)setRateControlExperimentVersionRemote:;
- (unsigned char)rateControlExperimentGroupIndexRemote;
- (void)setRateControlExperimentGroupIndexRemote:;
@end
