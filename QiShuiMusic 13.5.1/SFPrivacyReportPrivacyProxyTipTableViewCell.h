@interface SFPrivacyReportPrivacyProxyTipTableViewCell : UITableViewCell
@property (nonatomic) BOOL usesInsetStyle;
@property (nonatomic) <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void)setDelegate:;
- (void)prepareForReuse;
- (void)_dismiss:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateOfStateChange;
- (void)_setPrivacyProxyStateToTrackersAndWebsites:;
- (void)_setPrivacyProxyStateToTrackers:;
- (void)_openICloudPrivateRelaySettingsToLearnMore:;
- (void)setUsesInsetStyle:;
- (void)_createContentViews;
- (void)_turnOnCrossSiteTrackingProtectionIfNeeded;
- (BOOL)usesInsetStyle;
@end
