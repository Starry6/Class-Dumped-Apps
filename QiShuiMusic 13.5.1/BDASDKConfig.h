@interface BDASDKConfig : NSObject
@property (nonatomic) NSString settingURL;
- (id)sdkAppId;
- (void)setSettingURL:;
- (id)settingURL;
- (void).cxx_destruct;
+ (id)sharedConfig;
@end
