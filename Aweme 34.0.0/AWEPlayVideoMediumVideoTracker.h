@interface AWEPlayVideoMediumVideoTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayPauseInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)didTrackForTrackerInPlayer:type:paramsModel:trackParams:;
- (id)commonParamsForVideoPlayFinishInPlayer:paramsModel:;
- (BOOL)shouldAddContinueGroupId:;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
