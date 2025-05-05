@interface EKSyncStatusUtils : NSObject
+ (id)dataFromErrorUserInfo:;
+ (id)errorUserInfoFromData:;
+ (id)_permittedClassesForArchivingLastSyncErrorUserInfo;
@end
