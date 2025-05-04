@interface AWEShareSettings : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldShowShareWithWebURL:;
+ (BOOL)shouldMuteVideoWhenSharingAweme:toPlatform:;
+ (BOOL)isOverseasUser;
+ (id)defaultFeedShareGuideType;
+ (id)sharePlatformSettingForPlatform:;
+ (id)shareChannelTypes;
+ (id)sharePlatformSDKSetting;
+ (BOOL)shouldUseTencentSharingSDK;
+ (id)defaultSharePlatformSettings;
+ (id)sharePlatformSettings;
+ (id)actionSettings;
+ (id)webURLHostSharingWhitelist;
+ (id)actionChannelTypes;
+ (BOOL)shouldIgnoreOriginRule;
+ (BOOL)shouldIncludeIIDInShareURLWithType:;
@end
