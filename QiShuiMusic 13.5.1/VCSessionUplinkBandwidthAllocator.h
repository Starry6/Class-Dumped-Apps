@interface VCSessionUplinkBandwidthAllocator : VCObject
@property (nonatomic) BOOL redundancyEnabled;
@property (nonatomic) NSDictionary bitrateToStreamTable;
@property (nonatomic) BOOL redundancyEnabledFor720Stream;
- (id)init;
- (void)dealloc;
- (void)addBandwidthAllocationTableEntry:updateNow:;
- (void)streamToken:enabled:;
- (BOOL)isEnabledStreamToken:;
- (void)setRedundancyEnabled:;
- (BOOL)isRedundancyEnabled;
- (void)setRedundancyEnabledFor720Stream:;
- (BOOL)isRedundancyEnabledFor720Stream;
- (BOOL)peerSubscription:streamID:;
- (id)tableEntriesForStreamToken:targetBitrate:remainingBitrate:isLastEntryForStreamToken:;
- (id)mediaBitratesForStreamToken:targetNetworkBitrate:;
- (id)streamIDsForStreamToken:;
- (id)repairStreamIDsForStreamToken:;
- (id)streamIDsForStreamToken:targetBitrate:;
- (id)streamIDsForStreamToken:targetBitrateCap:;
- (void)_recomputeCurrentTable;
- (id)getBitrateToStreamTable;
@end
