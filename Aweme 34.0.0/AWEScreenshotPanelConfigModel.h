@interface AWEScreenshotPanelConfigModel : NSObject
@property (nonatomic) AWEScreenshotPanelConfigItemModel showPanelSwitchModel;
@property (nonatomic) AWEScreenshotPanelConfigItemModel showUserInfoSwitchModel;
@property (nonatomic) AWESettingItemModel parentPanelCellItem;
@property (nonatomic) NSMutableArray itemsArray;
- (void)updateScreenShootPanelShowSwitch:;
- (void)updateScreenShootPanelShowItem;
- (void)setParentPanelCellItem:;
- (id)showPanelSwitchModel;
- (id)showUserInfoSwitchModel;
- (BOOL)isScreenShootPanelShowSwitchOn;
- (BOOL)isScreenShootPanelShowUserSwitchOn;
- (void)updateScreenShootPanelShowUserSwitch:;
- (id)parentPanelCellItem;
- (void)updateScreenShootPanelShowUserItem;
- (void)setShowPanelSwitchModel:;
- (void)setShowUserInfoSwitchModel:;
- (void).cxx_destruct;
- (id)itemsArray;
- (void)setItemsArray:;
@end
