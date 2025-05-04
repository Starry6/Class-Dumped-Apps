@interface AWEPlayVideoOriginalTracker : NSObject
+ (id)originalParamsForVideoPlayInPlayer:paramsModel:;
+ (id)originalParamsForPlayTimeInPlayer:paramsModel:;
+ (id)originalParamsForPlayFinishInPlayer:paramsModel:;
+ (id)originalParamsForPlayPauseInPlayer:paramsModel:;
+ (void)addPadAttributesToParams:paramsModel:;
+ (void)addCircleTrackCommonParams:model:;
+ (id)getSearchVideoMethodWithPlayer:;
+ (void)followingEnterFeedParams:inPlayer:;
+ (void)followUnreadFeedParams:inPlayer:;
+ (void)trackFollowUnreadForEvent:inPlayer:paramsModel:trackType:;
+ (void)appendLogExtraKeys:withParams:player:;
+ (void)trackFansTool:inPlayer:;
+ (void)updateEnterMethodInLandscape:;
+ (BOOL)isSearchFeedWithParams:previousPage:;
@end
