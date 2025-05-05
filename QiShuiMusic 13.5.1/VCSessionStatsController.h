@interface VCSessionStatsController : NSObject
@property (nonatomic) @ reportingAgent;
@property (nonatomic) double statsReportingInterval;
- (void)dealloc;
- (void)reset;
- (void)periodicTask:;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (id)reportingAgent;
- (void)flushRealTimeReportingStats;
- (id)initWithDelegate:connectionManager:uplinkStatsCollector:downlinkStatsCollector:reportingAgent:transportSessionID:streamID:mediaQueue:;
- (void)sendLocalStats;
- (void)startLocalSessionStatsUpdate;
- (void)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsSend;
- (void)stopLocalSessionStatsUpdate;
- (void)updateRemoteSessionStats:;
- (BOOL)isRemoteSessionStatsTooLateWithStatsId:;
- (unsigned short)translateTimestampFromMicro:;
- (void)triggerRateControlWithLocalSessionStats:time:forUplink:forDownlink:fromVCRCExternalThread:;
- (void)statsReceiveStatsPayload;
- (void)handleRemoteSessionStats:;
- (void)calculateInterCallbackDurationWithTime:;
- (void)healthPrintForServerStats;
- (void)resetHealthPrintCounters;
- (double)statsReportingInterval;
- (void)setStatsReportingInterval:;
@end
