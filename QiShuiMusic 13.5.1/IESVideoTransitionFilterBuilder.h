@interface IESVideoTransitionFilterBuilder : NSObject
+ (void)addProgressForTransFilter:mediaInfo:atTime:;
+ (id)blackTransition:;
+ (id)buildTransFilter:context:;
+ (id)buildTransFilter:renderer:context:;
+ (id)dissolveTransition:;
+ (id)downOffsetTransition:;
+ (id)downWipeTransition:;
+ (double)getOverLapDurationForType:transDuration:;
+ (id)horizonalLineTransition:;
+ (BOOL)isNeedProgressForType:;
+ (BOOL)isOverlapType:;
+ (id)overlapBlendTransition:;
+ (id)overlapLeftMoveTransition:;
+ (id)overlapRightMoveTransition:;
+ (id)picMovieHTransition:;
+ (id)picMoviePTransition:;
+ (id)roundMaskTransition:;
+ (id)upOffsetTransition:;
+ (id)upWipeTransition:;
+ (id)verticalLineTransition:;
+ (id)whiteTransition:;
+ (id)zoominBlurTransition:;
+ (id)zoomoutBlurTransition:;
@end
