@interface AWEPlayVideoSearchTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayPauseInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
- (void)didTrackPlayTimeInPlayer:paramsModel:trackParams:;
- (void)didTrackFinishForTrackerInPlayer:paramsModel:trackParams:;
- (void)didTrackVideoPlayInPlayer:paramsModel:trackParams:;
- (id)addBtmDcmParamsForSearchInPlayer:;
- (void)p_addBtmInfoForPlayer:Params:;
- (void)p_changeTrackParamForHotSearchCard:Player:;
- (BOOL)enableUsePreciseMinePoint:;
- (id)innnerFeedPageBtmIdentifier:;
@end
