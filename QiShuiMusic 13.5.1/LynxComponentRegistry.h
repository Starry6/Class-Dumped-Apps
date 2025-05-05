@interface LynxComponentRegistry : NSObject
+ (id)lynxUIClasses;
+ (void)registerNode:nameAs:;
+ (void)registerShadowNode:withName:;
+ (void)registerUI:nameAs:;
+ (void)registerUI:withName:;
+ (Class)shadowNodeClassWithName:accessible:;
+ (BOOL)supportNode:;
+ (BOOL)supportUI:;
+ (Class)uiClassWithName:accessible:;
@end
