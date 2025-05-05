@interface BDAAppStoreSafeMethod : NSObject
+ (id)initSKStoreProductControllerWithDependency:;
+ (BOOL)openURL:dependency:;
+ (void)openURL:options:completion:dependency:;
@end
