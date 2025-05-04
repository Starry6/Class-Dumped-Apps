@interface AWEProfileEditManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)uploadCompanyHeaderImage:completion:;
+ (void)updateUserProfileEditResponseWithToastAndReturnPageIfNeededWithoutSync:completion:;
+ (void)updateUserProfileWithToastAndReturnPageIfNeeded:completion:;
+ (void)updateUserProfileWithToastAndReturnPageIfNeededWithoutSync:completion:;
+ (void)uploadImage:params:completion:;
+ (void)uploadImageWithType:image:webpPath:params:completion:;
+ (void)updateUserProfileWithParameter:needSync:completion:;
+ (void)uploadWebpImage:params:completion:;
+ (void)updateUserProfile:completion:;
+ (id)checkWithParams:completion:;
+ (void)updateUserProfileEditResponseWithParameter:needSync:completion:;
+ (void)updateUserInfoWithParameter:model:;
+ (BOOL)needSetNickUpdateReminderParameter;
+ (id)hometownMapping;
@end
