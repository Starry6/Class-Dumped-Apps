@interface AWEPlayVideoPlayletTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
- (id)playletAutoPlayParamsWithModel:logExtraDic:;
- (BOOL)isFromTheater:;
- (id)paymentAndRewardParamsForModel:player:;
@end
