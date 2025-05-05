@interface BDPolicyUtil : NSObject
+ (double)getRelativeTime;
+ (id)callbackStacksWithFilterClasses:;
+ (unsigned long long)compareVersion:toVersion:;
+ (double)getIncrementTime;
+ (BOOL)shouldIgnoreSymbol:withFilterClasses:;
+ (id)appVersion;
@end
