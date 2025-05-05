@interface IESLiveAudienceInteractDistributeSettingGuidePopupView : UIView
@property (nonatomic) NSInteger option;
@property (nonatomic) UILabel settingValueLabel;
@property (nonatomic) q itemType;
@property (nonatomic) @? trackCallback;
@property (nonatomic) @? confirmAction;
@property (nonatomic) @? didUpdateDistributionOption;
- (void)setDidUpdateDistributionOption:;
- (void)didClickConfirmBtn;
- (void)didClickSettingSwitch:;
- (id)didUpdateDistributionOption;
- (id)mappedTrackStringFromOption:;
- (void)setSettingValueLabel:;
- (void)setTrackCallback:;
- (id)settingValueLabel;
- (void)setupWithSettingModel:config:;
- (void)setupWithSettingModel:enableCircle:;
- (void)showWeakDistributionPanel;
- (id)trackCallback;
- (void)setItemType:;
- (long long)itemType;
- (void).cxx_destruct;
- (void)setOption:;
- (id)confirmAction;
- (void)setConfirmAction:;
- (int)option;
@end
