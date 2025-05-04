@interface AWEPlayVideoVIPVideoTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (void)addVIPVideoParamsIfNeedWithTrackParams:playerExtraParams:;
@end
