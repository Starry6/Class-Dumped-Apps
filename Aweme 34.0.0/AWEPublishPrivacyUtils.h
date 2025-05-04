@interface AWEPublishPrivacyUtils : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (long long)get24StoryPrivacyPermissionTypeForPublishViewModel:;
+ (long long)getPrivacyPermissionTypeForPublishViewModel:;
+ (long long)getPrivacyPermissionTypeForRepoAuthorityModel:;
+ (long long)getFinalPrivacyPermissionTypeForPublishViewModel:;
@end
