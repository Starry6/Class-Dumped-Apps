@interface EKPersistentSyncError : EKPersistentObject
- (int)errorCode;
- (void)setErrorCode:;
- (int)entityType;
- (void)setUserInfoData:;
- (id)userInfoData;
- (int)errorType;
- (void)setErrorType:;
+ (id)relations;
+ (Class)meltedClass;
@end
