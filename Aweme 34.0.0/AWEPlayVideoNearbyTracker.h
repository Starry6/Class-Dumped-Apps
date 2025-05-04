@interface AWEPlayVideoNearbyTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (id)getParamsFromNearbyModuleServiceOfEventName:withContext:;
@end
