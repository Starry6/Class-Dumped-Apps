@interface AWEHotSpotTrackingManager : NSObject
+ (void)modifyParamsDictWithModel:params:context:;
+ (void)changeParamsForHotSpotFromSourceParams:model:;
+ (id)videoPlayAspect;
+ (id)videoPlayTimeAspect;
+ (id)videoPlayFinishAspect;
+ (id)likeAspect;
+ (id)likeCancelAspect;
+ (id)dislikeAspect;
+ (id)shareVideoAspect;
+ (id)favourateAspect;
+ (id)cancelFavourateAspect;
+ (id)likeCommentAspect;
+ (id)cancelLikeCommentAspect;
+ (id)postCommentAspect;
@end
