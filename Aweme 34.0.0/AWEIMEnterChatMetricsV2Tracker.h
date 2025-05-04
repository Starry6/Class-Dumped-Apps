@interface AWEIMEnterChatMetricsV2Tracker : NSObject
@property (nonatomic) NSMutableDictionary trackTriggers;
@property (nonatomic) NSMutableDictionary monitors;
@property (nonatomic) NSDictionary metricsCategory;
@property (nonatomic) q initMessageListVCTime;
@property (nonatomic) AWEIMConversationContext convContext;
- (id)convContext;
- (long long)firstTimeDuration;
- (void)setConvContext:;
- (void)setMessageListVCInitTime:;
- (void)setMetricsCustomStats:;
- (void)addEnterChatProcessMonitorObject:;
- (BOOL)triggerUploadMetricsBy:;
- (void)startTrackTimeWithKey:;
- (void)endTrackTimeWithKey:;
- (void)setInitMessageListVCTime:;
- (id)trackTriggers;
- (void)setTrackTriggers:;
- (BOOL)p_allTriggersFired;
- (id)p_collectMetrics;
- (long long)initMessageListVCTime;
- (void)fillLoadMessageLinkInfoWithDisplayTime:params:;
- (void)invalidateTrackSession;
- (void)setMonitors:;
- (id)monitors;
- (void).cxx_destruct;
- (id)metricsCategory;
- (void)setMetricsCategory:;
@end
