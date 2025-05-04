@interface AWECloudCompileAuthManager : NSObject
+ (void)getAuthInfoWithSuccess:failure:;
+ (id)cloudCompileAuthInfoKey;
+ (BOOL)authInfoIsValid:;
+ (id)sharedManager;
@end
