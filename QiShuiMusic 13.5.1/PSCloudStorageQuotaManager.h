@interface PSCloudStorageQuotaManager : NSObject
- (void)getQuotaInfoForPrimaryAccountCompletion:;
+ (id)sharedManager;
@end
