@interface AMSVersionComparator : NSObject
+ (BOOL)isVersionSupported:requiredVersion:;
+ (id)_sanitizedVersionStringForVersionString:;
@end
