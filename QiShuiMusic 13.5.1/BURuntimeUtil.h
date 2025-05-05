@interface BURuntimeUtil : NSObject
+ (void)bu_exchangeClassSEL:originClass:targetClassSEL:targetClass:;
+ (void)bu_exchangeClassSEL:targetClassSEL:aClass:;
+ (void)bu_exchangeInstanceSEL:originClass:targetInstanceSEL:targetClass:;
+ (void)bu_exchangeInstanceSEL:targetInstanceSEL:aClass:;
+ (BOOL)bu_hasImpletionClass:sel:;
+ (void)exchangeSEL:originClass:targetSEL:targetClass:isClassMethod:;
+ (void)exchangeSEL:targetSEL:aClass:isClassMethod:;
@end
