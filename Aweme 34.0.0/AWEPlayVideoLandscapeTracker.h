@interface AWEPlayVideoLandscapeTracker : AWEPlayVideoBaseTracker
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (BOOL)isInLandscapeFeedStatus;
- (BOOL)enablePlayVCDecouple;
- (void)trackLandscapePlayTime:paramsModel:;
@end
