@interface AWEPublishPrivacySecurityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEStudioGlobalConfig;
- (void)resetDownloadPermissionWithPrivacyCheck:;
- (void)resetDuetPermissionWithPrivacyCheck:;
- (void)resetStoryPermissionWithPrivacyCheck:;
- (void)checkDownloadPermissionWithoutVisibility:;
- (void)checkDownloadPermissionIncludingVisibility:;
- (void)checkDuetPermissionWithoutVisibility:;
- (void)checkDuetPermissionIncludingVisibility:;
- (void)checkStorySharePermissionWithoutVisibility:;
- (void)checkStorySharePermissionIncludingVisibility:;
- (void)resetAuthorityModelWithPrivacyCheck:;
- (void)resetSyncModelWithPrivacyCheck:;
- (id)userModel;
+ (Class)aAWEStudioGlobalConfigClass;
+ (void)showDebugAlertWithTitle:error:;
+ (id)sharedInstance;
@end
