@interface AWEGCPQQPlatformUtil : NSObject
+ (BOOL)isQQInstalled;
+ (unsigned long long)getMiniProgramType;
+ (void)openQQMiniProgramWithMiniProgramID:miniProgramPath:completion:;
@end
