@interface LynxAnimationUtils : NSObject
+ (void)addContentAnimationDelegateTo:forTargetLayer:withContent:withProp:;
+ (void)addPathAnimationDelegateTo:forTargetLayer:withPath:withProp:;
+ (void)applyAnimationProperties:withInfo:forLayer:;
+ (void)applyCommonAnimationProperty:;
+ (void)attachOpacityTo:animation:forKey:;
+ (void)attachTo:animation:forKey:;
+ (id)createBasicAnimation:from:to:info:;
+ (void)removeAnimation:withName:;
@end
