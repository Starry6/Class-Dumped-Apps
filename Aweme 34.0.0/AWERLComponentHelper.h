@interface AWERLComponentHelper : NSObject
+ (id)superComponent:;
+ (void)setComponentNeedsUpdate:;
+ (void)setComponentNeedsUpdateAnimated:animator:fromNode:toNode:start:completion:;
+ (void)attachComponent:superComponent:delegate:;
+ (id)subComponents:;
+ (void)clearSubComponents:;
+ (void)notifyUpdateFinish:updateResult:;
+ (id)buildVirtualNode:;
+ (id)buildVirtualNode:animationRequests:forFromState:;
+ (id)__info:;
+ (id)buildComponent:superComponent:delegate:params:;
+ (void)setComponent:delegate:;
@end
