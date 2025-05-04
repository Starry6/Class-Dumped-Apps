@interface AWEPublishPrivacySetting : NSObject
+ (BOOL)shouldShowAlert:;
+ (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:;
+ (void)showSelfAlertIfNeeded:publishModel:;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:checkStartAtlas:;
+ (void)trackChangeXiguaPrivacyWithXiguaPrivacyType:awemeModel:isReedit:isStarAtlas:success:;
+ (id)keyWithType:;
+ (void)showSelfAlert:publishModel:;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:checkStartAtlas:checkLandscape:;
@end
