@interface VCConnectionHealthMonitor : NSObject
@property (nonatomic) <VCConnectionHealthMonitorDelegate> delegate;
@property (nonatomic) double primaryConnHealthAllowedDelay;
@property (nonatomic) BOOL usingServerBasedLinks;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (double)primaryConnHealthAllowedDelay;
- (void)updateReceiveStats;
- (unsigned int)generateStatsBlob;
- (void)processPeerStatsBlob:;
- (void)resetConnectionStats:;
- (void)updateStatsHistory;
- (void)resetHistory:;
- (void)reportConnectionHealthWithStatsHistory:index:isPeerStats:;
- (void)updateRatiosForHistory:withIndex:;
- (BOOL)isHistoryValid:;
- (BOOL)isHistoryImproved:currentIndex:;
- (BOOL)isPrimaryConnectionImprovedFromHistory:withIndex:remoteStatsHistory:;
- (void)setPrimaryConnHealthAllowedDelay:;
- (BOOL)usingServerBasedLinks;
- (void)setUsingServerBasedLinks:;
@end
