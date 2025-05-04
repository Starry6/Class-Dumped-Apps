@interface AWEPlayVideoDefaultTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayPauseInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
- (void)addMixInfoParamsToEventIfNeed:player:;
- (void)addCSRCampainTaskParamsToEventIfNeed:player:;
- (void)addTabJumpInfoParamsIfNeed:player:;
- (void)didTrackPlayInPlayer:paramsModel:params:;
- (void)didTrackPlayTimeInPlayer:paramsModel:params:;
- (void)trackReviseLastPlayingAwemeIDIfNeed:;
- (id)paramsForVideoPlayForSubClassInPlayer:playerExtraParams:;
@end
