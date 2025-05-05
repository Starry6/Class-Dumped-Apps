@interface BDNativeHookUtil : NSObject
+ (BOOL)swizzleClass:oriMethod:altMethod:;
@end
