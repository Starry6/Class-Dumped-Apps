@interface IESLiveAudienceInteractDistributeSettingPopupView : UIView
@property (nonatomic) NSInteger option;
@property (nonatomic) UILabel settingValueLabel;
@property (nonatomic) q itemType;
@property (nonatomic) @? trackCallback;
@property (nonatomic) @? didUpdateDistributionOption;
- (void)didClickBackBtn;
- (void)setDidUpdateDistributionOption:;
- (void)chooseSetting;
- (void)didClickSettingSwitch:;
- (id)didUpdateDistributionOption;
- (void)setSettingValueLabel:;
- (void)setTrackCallback:;
- (id)settingValueLabel;
- (void)setupWithSetting:config:;
- (void)setupWithSetting:prompts:;
- (id)trackCallback;
- (void)setItemType:;
- (long long)itemType;
- (void).cxx_destruct;
- (void)setOption:;
- (int)option;
@end
