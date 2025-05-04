@interface AWEAppUserProfileSettingManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)cleanFollowingSubTitleSettings;
+ (id)lightCoverURL;
+ (id)darkCoverURL;
+ (id)profileEditDefaultTextJson;
+ (id)__profileDefaultCoverSetting;
+ (id)normativeHandleRegexp;
+ (BOOL)enableProfileCreatorBanner;
+ (long long)trackLeaveHomepageThresholdDuration;
+ (id)profileEditNickNamePromptTipsString;
+ (id)profileEditUserIDPromptTipsString;
+ (id)replaceFollowingListTopText;
+ (BOOL)openRealTimeOnlineStatus;
+ (BOOL)showClearSchoolInfoButton;
+ (id)lightCoverMaskColor;
+ (id)darkCoverMaskColor;
+ (id)defaultMaskColor;
+ (id)lightFrameColor;
+ (id)darkFrameColor;
@end
