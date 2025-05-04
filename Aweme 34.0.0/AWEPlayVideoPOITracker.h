@interface AWEPlayVideoPOITracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
- (id)__nearbyModuleService;
- (id)fetchConfigInParams:withEventType:;
- (id)getEnterMethodFromTrackerData:originEnterMethod:config:;
@end
