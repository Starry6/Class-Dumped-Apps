@interface AWEAspect : NSObject
+ (void)swizzleInstanceMethod:inClass:inModule:newImpFactory:;
+ (void)swizzleInstanceSpecialMethod:withNewSelector:inClass:inModule:;
+ (void)swizzleClassMethod:inClass:inModule:newImpFactory:;
+ (void)swizzleClassSpecialMethod:withNewSelector:inClass:inModule:;
+ (void)setHookBlockList:;
+ (void)setLogCallback:fileLog:assertLog:;
@end
