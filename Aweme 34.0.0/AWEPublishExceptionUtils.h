@interface AWEPublishExceptionUtils : NSObject
+ (id)defaultConfigs;
+ (id)experimentConfigWithType:;
+ (BOOL)isSubsetDict:parentDict:;
+ (void)alertWithType:params:;
+ (void)trackEventWithType:publishModel:params:;
+ (void)uploadThreadInfosWithType:params:;
+ (void)uploadAlogWithType:params:;
@end
