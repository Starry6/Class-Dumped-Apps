@interface AWEPlayVideoConcernTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayPauseInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (id)paramsForTrackerIn:type:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
@end
