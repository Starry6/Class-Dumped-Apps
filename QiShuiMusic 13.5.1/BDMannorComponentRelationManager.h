@interface BDMannorComponentRelationManager : NSObject
+ (id)p_getToHideViewArrayWith:componentMap:scene:styleTemplate:mannorComponent:isShowAnimation:;
+ (void)p_handleAnimationWithFirstStepViewArray:firstStepTransform:firstStepAlpha:secondStepViewArray:secondStepTransform:secondStepAlpha:;
+ (void)p_handleAnimationWithFirstStepViewArray:firstStepTransform:secondStepViewArray:secondStepTransform:;
+ (void)p_startToHideToShowAnimationTypeDownToFadeInWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)p_startToHideToShowAnimationTypeMoveLeftToRightWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)p_startToHideToShowAnimationTypeUpToFadeInWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)p_startToShowToHideAnimationTypeDownToFadeInWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)p_startToShowToHideAnimationTypeMoveLeftToRightWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)p_startToShowToHideAnimationTypeUpToFadeInWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)setupAnimationInitalStateWith:componentRelation:;
+ (void)startHideComponentWith:componentRelation:componentMap:scene:;
+ (void)startHideComponentWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
+ (void)startShowComponentWith:componentRelation:componentMap:scene:;
+ (void)startShowComponentWith:componentRelation:componentMap:scene:styleTemplate:mannorComponent:;
@end
