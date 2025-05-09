@interface AWEPublishAndAdvanceSettingsPopupItemConfig : NSObject
@property (nonatomic) NSString settingType;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString indicatorText;
@property (nonatomic) NSString cellClass;
@property (nonatomic) NSString toast;
@property (nonatomic) @? customToastBlock;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL disable;
@property (nonatomic) q styleType;
@property (nonatomic) BOOL shouldShowTipButton;
@property (nonatomic) NSString tipText;
@property (nonatomic) NSString tipButtonIconName;
@property (nonatomic) NSString tipAlertTitle;
@property (nonatomic) NSString tipAlertMesssage;
@property (nonatomic) NSString tipAlertConfirmText;
@property (nonatomic) AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig extraConfig;
- (void)setStyleType:;
- (void)setDisable:;
- (void)setIndicatorText:;
- (id)indicatorText;
- (id)extraConfig;
- (void)setExtraConfig:;
- (id)tipText;
- (void)setTipText:;
- (BOOL)switcherState;
- (void)setSwitcherState:;
- (void)setCustomToastBlock:;
- (void)setShouldShowTipButton:;
- (void)setTipButtonIconName:;
- (void)setTipAlertMesssage:;
- (void)setTipAlertConfirmText:;
- (id)customToastBlock;
- (BOOL)shouldShowTipButton;
- (id)tipButtonIconName;
- (id)tipAlertTitle;
- (void)setTipAlertTitle:;
- (id)tipAlertMesssage;
- (id)tipAlertConfirmText;
- (BOOL)disable;
- (id)iconImage;
- (void)setIconImage:;
- (id)cellClass;
- (long long)styleType;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)settingType;
- (void)setToast:;
- (id)toast;
- (void)setCellClass:;
- (void)setSettingType:;
@end
