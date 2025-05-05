@interface IESIMSaaSLunaSettingServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableAwemeImageAlbumMessageType;
+ (BOOL)enableAwemeVideoMessageType;
+ (BOOL)enableMessageReference;
+ (BOOL)enableNavigationBarHook;
+ (BOOL)isShowIMSwitchInChatListSettingPage;
+ (BOOL)isShowInnerPushSwitchInChatListSettingPage;
+ (BOOL)shouldShowFirstEntryIMPageAlerts;
+ (long long)showReplyTextInputInVideoImageDisplayPageStyle;
+ (unsigned long long)teenModeDowngradePolicy;
+ (id)webcastAppId;
@end
