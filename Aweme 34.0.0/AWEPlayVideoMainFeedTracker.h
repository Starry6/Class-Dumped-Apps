@interface AWEPlayVideoMainFeedTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (id)paramsForTrackerIn:type:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
- (BOOL)enablePlayVCDecouple;
- (id)getDefaultParamsDictionaryWithModel:;
- (long long)getDyQTimeForModel:;
- (void)configForAutoPlayInPlayTime:;
- (void)traceSpeedPlayTime:;
- (void)paramsForStablePageInPlayer:params:type:;
- (void)addAutoPlayTrackParmas:referString:;
- (void)addResponseFromTrackParams:player:;
- (void)addPlayMethodTrackParams:referString:paramsModel:;
@end
