@interface RSSwizzle : NSObject
+ (void)swizzleClassMethod:inClass:newImpFactory:;
+ (BOOL)swizzleInstanceMethod:inClass:newImpFactory:mode:key:;
@end
