@interface BDMannorAdReportService : NSObject
+ (void)p_trackEventWith:creativeID:groupID:logExtra:extra:adExtraData:tag:refer:;
+ (void)p_trackURLLListWith:logExtra:trackLabel:trackURLList:extra:adExtraData:;
+ (void)trackAdBreakWith:logExtra:extra:adExtraData:tag:refer:watchedDuration:;
+ (void)trackAdClickWith:logExtra:extra:adExtraData:tag:refer:;
+ (void)trackAdContinueWith:logExtra:extra:adExtraData:tag:refer:;
+ (void)trackAdOverWith:logExtra:extra:adExtraData:tag:refer:watchedDuration:;
+ (void)trackAdPauseWith:logExtra:extra:adExtraData:tag:refer:;
+ (void)trackAdPlayFailedWith:logExtra:extra:adExtraData:tag:refer:;
+ (void)trackAdPlayWith:logExtra:extra:adExtraData:tag:refer:;
+ (void)trackAdReplayWith:logExtra:extra:adExtraData:tag:refer:;
+ (void)trackAdShowWith:logExtra:extra:adExtraData:tag:refer:;
@end
