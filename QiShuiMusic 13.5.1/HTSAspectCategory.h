@interface HTSAspectCategory : NSObject
+ (id)aspect:select:originalFunc:;
+ (id)aspect:selector:originalFunc:;
+ (void)callbackWith:select:ret:;
+ (void)callbackWith:selector:ret:;
@end
