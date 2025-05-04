@interface AWEIMFeedCardTracker : NSObject
@property (nonatomic) HMDThreadSafeDictionary messageLists;
@property (nonatomic) HMDThreadSafeDictionary trackedMessageLists;
- (void)cleanTrackerWhenLeaveScene;
- (BOOL)enableTrackForMessageType:;
- (id)messageLists;
- (id)trackedMessageLists;
- (void)p_setupMsgMetricForKey:inMap:;
- (void)p_updateTimeFor:inMap:stage:event:;
- (long long)p_getLastStage;
- (void)p_reportForMessageID:;
- (id)p_getKeyForStage:;
- (long long)p_getStageDuration:inMetric:;
- (long long)p_getStageDurationFrom:toStage:inMetric:;
- (void)trackStartForMessage:;
- (void)updateForMessage:stage:event:;
- (void)setMessageLists:;
- (void)setTrackedMessageLists:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
