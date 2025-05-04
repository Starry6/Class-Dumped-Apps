@interface AWEShowTrackerTrackingManager : NSObject
+ (id)videoPlayAspect;
+ (id)videoPlayFinishAspect;
+ (id)likeAspect;
+ (id)dislikeAspect;
+ (id)shareVideoAspect;
+ (id)postCommentAspect;
+ (id)playTimeAspect;
+ (id)favouriteVideoAspect;
+ (id)enterPersonalDetailAspect;
+ (id)clickCommentButtonAspect;
+ (id)videoPlayFailedAspect;
+ (id)showTrackerRootListForGroupId;
+ (id)longVideoCommonAspectParamDicWithAwemeModel:withLogExtra:;
+ (id)getShowTrackerCommonParamsWithEvent:model:logExtra:;
+ (id)videoPlayQualityAspect;
+ (id)highlightPlayAspect;
+ (id)followPlayAspect;
@end
