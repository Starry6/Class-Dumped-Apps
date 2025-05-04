@interface AWEWidgetDonationConfigManager : NSObject
@property (nonatomic) BOOL disableOldDonationTimeABValue;
@property (nonatomic) BOOL currentWidgetNotInstallDonateABValue;
@property (nonatomic) BOOL notInstallWidgetDonateABValue;
@property (nonatomic) NSArray donationTimeArray;
@property (nonatomic) NSArray sceneSwitchListeners;
- (BOOL)disableOldDonationTimeABValue;
- (BOOL)notInstallWidgetDonateABValue;
- (BOOL)currentWidgetNotInstallDonateABValue;
- (void)widgetDonationABValueProcess;
- (void)startWidgetDonationSwitchListener;
- (void)setDisableOldDonationTimeABValue:;
- (void)setCurrentWidgetNotInstallDonateABValue:;
- (void)setNotInstallWidgetDonateABValue:;
- (void)setDonationTimeArray:;
- (id)donationTimeArray;
- (void)setSceneSwitchListeners:;
- (id)sceneSwitchListeners;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
