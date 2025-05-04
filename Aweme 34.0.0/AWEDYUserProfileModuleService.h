@interface AWEDYUserProfileModuleService : AWEUserProfileModuleService
- (Class)aweUserDetailViewControllerClass;
- (void)showProfileHeaderActionControllerWithUser:params:unfollowConfirmationBlock:;
- (void)showLocationEditLocationFromH5:;
- (void)directShowAvatarPickerWithEnterFrom:isFirstReplace:enablePublishAvatarStory:trackInfo:;
- (BOOL)isNewProfileUIStyle;
- (Class)aweUserHomeViewControllerClass;
- (id)profileHeaderActionController;
- (id)locationDisplayTextGenerator;
@end
