@interface VCSessionDownlinkBandwidthAllocator : NSObject
@property (nonatomic) Q simultaneousTalkers;
@property (nonatomic) BOOL forceFullBandwidth;
- (void)dealloc;
- (void)reset;
- (id)initWithReportingAgent:;
- (void)sortMediaEntries;
- (unsigned int)requiredAudioBitrate:highestAudioBitrates:;
- (void)updateHighestAudioBitrates:bitrate:;
- (unsigned long long)simultaneousTalkers;
- (id)distributeBitrate:;
- (void)updateSelectedMediaEntriesForClientWithUUID:;
- (void)registerForBandwidthAllocationWithClient:;
- (void)reportingSessionParticipantEventBitrateChanged:optedInNetworkBitrate:actualNetworkBitrate:optedInStreamID:actualStreamID:;
- (void)deregisterForBandwidthAllocationWithClient:;
- (void)client:didActualNetworkBitrateChangeForStreamGroupID:;
- (BOOL)forceFullBandwidth;
- (void)setForceFullBandwidth:;
+ (id)sortMediaEntriesGroupIds:;
@end
