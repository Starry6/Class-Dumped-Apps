@interface VCStatisticsHistory : NSObject
- (void)dealloc;
- (void)addStatsHistory:;
- (double)getPacketLossRateAtTime:inMostRecentDuration:;
- (double)getSendingBitrateAtTime:inMostRecentDuration:;
- (double)getReceivingBitrateAtTime:inMostRecentDuration:;
- (double)getServerStatsBitrateAtTime:inMostRecentDuration:;
- (int)getBurstyLossAtTime:inMostRecentDuration:withPercentile:;
- (void)addAndPruneSendHistory:upToTime:;
- (id)getSendHistoryElementWithPacketId:;
- (double)getRoundTripTimeWithPacketId:time:;
- (BOOL)isStatsElementOutOfOrder:;
- (BOOL)getStatsHistoryElementIndex:time:inMostRecentDuration:;
- (BOOL)handleWrappedAroundByteCountForStats:;
- (void)resetHistory;
- (void)clearSendHistory;
@end
