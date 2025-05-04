@interface AWEPlayInteractionElementPriorityMananger : NSObject
+ (id)elementsNeedCountHeight;
+ (BOOL)checkContextInvalid:;
+ (BOOL)checkContainerInvalid:;
+ (void)trackElementsAppearWithContainer:context:;
+ (void)resetPriorityAvoidModel:;
+ (void)setupPriorityAvoidTrack:context:;
@end
