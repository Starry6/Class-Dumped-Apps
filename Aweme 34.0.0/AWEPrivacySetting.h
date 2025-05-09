@interface AWEPrivacySetting : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)privateSettingGuideManager;
+ (void)fetchIMSettingWithCompletion:;
+ (void)switchFollowShotStoreViewStatus:completion:;
+ (void)changeUserSettingsWithParam:completion:;
+ (void)disableAddressBook:;
+ (void)switchVideoStoreViewStatus:isQuickStory:completion:;
+ (BOOL)privacySettingOptimize;
+ (void)fetchIMSettingWithSource:completion:;
+ (id)followingFollowerPermissionStatusTitle:;
+ (id)fansPagePermissionStatusTitle:;
+ (id)followingFollowerTrackKey:;
+ (id)closePrivacyTipString;
+ (void)clearIMSettingWhenLogout;
+ (void)changeAddressBookWithEnable:completion:;
+ (id)allowCommentTip;
+ (id)allowDuetTip;
+ (id)allowReactTip;
+ (BOOL)allowFilterComment;
+ (BOOL)autoFilterOffensiveComments;
+ (id)wholeAllowReceivingMessageTips;
+ (id)currentIMSetting;
+ (void)enableAddressBook:;
+ (void)enableAutoFilterOffensiveComments:;
+ (void)disableAutoFilterOffensiveComments:;
+ (void)enableNearbyVisible:;
+ (void)disableNearbyVisible:;
+ (void)enableReadStatus:;
+ (void)disableReadStatus:;
+ (id)whoCanSeeMyLikeTip;
+ (id)allowDownloadTip;
+ (id)allowFavoriteTip;
+ (id)myCollectionMusicTip:;
@end
