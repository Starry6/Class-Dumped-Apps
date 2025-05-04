@interface AWEBDSimBSBizConfig : BDSimBSBizConfig
- (double)maxVideoDuration;
- (id)getFeedCacheBsModelWith:;
- (Class)bsModelTransformer;
- (long long)checkingPlaylistLen;
- (long long)firstFeedCntThreshold;
- (BOOL)ladderSelectionPredictType;
- (double)maxBandwidthUsageFactor;
- (double)maxFdBandwidthUsageFactor;
- (double)maxFdInternetSpeedKBps;
- (double)maxNfdInternetSpeedKBps;
- (double)maxReservedDurationMs;
- (double)minBandwidthUsageFactor;
- (double)minFdBandwidthUsageFactor;
- (double)minFdInternetSpeedKBps;
- (double)minNfdInternetSpeedKBps;
- (BOOL)playListWiseBitrateSelectFixSwitch;
- (long long)recordPlaylistCheckingLen;
- (double)safeCacheDurationMs;
- (id)bsTrackingProtocol;
- (id)bsConditionTransProtocol;
- (double)getPlayedDurationFromModel:;
- (BOOL)enableTracking;
- (void)onTrackingEvent:;
- (void)setBsTrackingProtocol:;
- (void)setBsConditionTransProtocol:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
