@interface AWEIMFacePuzzleUtil : NSObject
+ (id)stringFromActionType:;
+ (void)trackFacePuzzlePerformWithActionType:effectID:effectType:stage:state:duration:withParams:;
+ (id)answeringSettings;
+ (void)removeVC:fromNavigationController:skip:;
+ (BOOL)activityIsDown;
+ (id)stringFromEffectType:;
+ (id)stringFromStage:;
+ (double)doubleValueForKey:;
+ (id)stringFromState:;
+ (id)effectSettings;
+ (id)stringValueForKey:;
@end
