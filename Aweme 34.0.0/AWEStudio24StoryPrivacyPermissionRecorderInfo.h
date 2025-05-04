@interface AWEStudio24StoryPrivacyPermissionRecorderInfo : MTLModel
@property (nonatomic) Q privacyType;
@property (nonatomic) q privacyPermissionType;
@property (nonatomic) NSArray userList;
- (id)userList;
- (void)setPrivacyPermissionType:;
- (long long)privacyPermissionType;
- (unsigned long long)privacyType;
- (void)setPrivacyType:;
- (void)setUserList:;
- (id)initWithPrivacyType:privacyPermissionType:userList:;
- (id)description;
- (void).cxx_destruct;
@end
