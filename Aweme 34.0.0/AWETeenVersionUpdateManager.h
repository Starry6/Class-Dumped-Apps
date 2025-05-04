@interface AWETeenVersionUpdateManager : NSObject
@property (nonatomic) @? onClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (id)currentAppVersion;
- (BOOL)forceUpgradeCheckEncryptionEnable;
- (void)requestNewVersion;
- (BOOL)checkEncryption;
- (void)updatePopupShowTrack;
- (void)p_showUpgradeAlert;
- (id)versionUpdateAlertConfig;
- (BOOL)versionCompareForUpgrade;
- (void)updatePopupClickTrackWithCancel:;
- (void)updatePopupTrack:cancel:;
- (void)close;
- (void).cxx_destruct;
- (id)onClose;
- (void)setOnClose:;
+ (BOOL)isTeenUpgradeAlertOptimizeEnable;
@end
