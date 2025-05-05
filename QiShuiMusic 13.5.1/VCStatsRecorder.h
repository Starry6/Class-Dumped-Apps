@interface VCStatsRecorder : NSObject
- (id)init;
- (void)dealloc;
- (void)updateSessionStats:connection:totalPacketSent:totalPacketReceived:;
- (void)getLocalStats:localSessionStats:;
- (id)getMostRecentLocalStats;
- (int)serverStatsSizeInByteForUplink:connection:;
@end
