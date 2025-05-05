@interface IESLiveRevenueInteractSettingCellItem : IESLiveDynamicModel
@property (nonatomic) q style;
@property (nonatomic) NSString settingIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) q textNumber;
@property (nonatomic) NSString textValue;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) BOOL enableUserInteraction;
@property (nonatomic) BOOL switchValue;
@property (nonatomic) BOOL controlSwitchManually;
@property (nonatomic) BOOL disableStorageValue;
@property (nonatomic) @? action;
@property (nonatomic) @? didSelectCellAction;
- (void)setTextNumber:;
- (long long)textNumber;
- (id)action;
- (void)setEnableUserInteraction:;
- (void)setAction:;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (BOOL)enableUserInteraction;
@end
