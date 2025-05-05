@interface CNObjCClass : NSObject
- (id)initWithClass:;
- (id)instanceMethodForSelector:;
- (void)enumerateMethodsWithBlock:;
- (id)allMethods;
- (BOOL)addMethod:;
+ (void)enumerateMethodsOfClass:withBlock:;
+ (id)classWithClass:;
+ (id)instanceMethodOfClass:forSelector:;
+ (id)allMethodsOfClass:;
+ (BOOL)addMethod:toClass:;
@end
