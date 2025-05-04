@interface AWESCPortraitCastSettingViewController : AWESCPortraitSingleSelectionViewController
@property (nonatomic) NSArray supportedSettingItems;
@property (nonatomic) BDSCPlayControlMediaInfoModel mediaInfoModel;
@property (nonatomic) DUXSwitch autoNextSwitch;
@property (nonatomic) DUXSwitch stretchSwitch;
@property (nonatomic) DUXSwitch skipHTSwitch;
- (void)configWithModel:;
- (id)dataSourceArray;
- (id)supportedSettingItems;
- (id)autoNextSwitch;
- (id)stretchSwitch;
- (id)skipHTSwitch;
- (id)mediaInfoModel;
- (void)setMediaInfoModel:;
- (void)setSupportedSettingItems:;
- (void)preHandleCell:atIndex:;
- (long long)accessoryStyleAtIndex:;
- (id)accessoryInfoAtIndex:;
- (Class)sheetClass;
- (void)configWithCastSettingOptions:exposedOptions:;
- (void)setAutoNextSwitch:;
- (void)setStretchSwitch:;
- (void)setSkipHTSwitch:;
- (id)iconImageAtIndex:;
- (void).cxx_destruct;
- (id)titleString;
- (id)titleForItem:;
- (void)selectItemAtIndex:;
@end
