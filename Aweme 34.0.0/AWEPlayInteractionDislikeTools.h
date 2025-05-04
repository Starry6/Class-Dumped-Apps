@interface AWEPlayInteractionDislikeTools : NSObject
+ (BOOL)enableFiltAuthorForDislike;
+ (unsigned long long)capacityForDislikeAuthorInfo;
+ (double)timeThresholdForDislikeAuthorInfo;
+ (id)whiteSceneForDislikeAuthorInfo;
+ (id)dislikeReasonWithModel:;
+ (void)trackSubmitDislikeReason:awemeModel:extraInfo:;
+ (void)trackSubmitedDislikeReason:awemeModel:extraInfo:;
@end
