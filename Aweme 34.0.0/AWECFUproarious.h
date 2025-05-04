@interface AWECFUproarious : NSObject
+ (BOOL)isValidPatchWithConfig:needStrictCheck:;
+ (void)updateAppInfoWithAppVersion:channel:;
+ (id)appInfo;
@end
