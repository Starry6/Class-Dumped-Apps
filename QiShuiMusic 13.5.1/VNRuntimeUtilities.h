@interface VNRuntimeUtilities : NSObject
+ (BOOL)linkTimeOrRunTimeAtLeastVersion:;
+ (int)runTimeVersion;
+ (void)enumerateSubclassesOfClass:excludingRootClass:usingBlock:;
+ (int)linkTimeVersion;
+ (id)allSubclassesOfClass:excludingRootClass:overridingClassSelector:;
+ (id)leafSubclassesOfClass:excludingRootClass:overridingClassSelector:;
+ (BOOL)class:overridesClassSelector:;
+ (id)subclassesOfClass:excludingRootClass:passingTest:;
+ (BOOL)object:overridesSelector:;
+ (BOOL)linkTimeOrRunTimeBeforeVersion:;
@end
