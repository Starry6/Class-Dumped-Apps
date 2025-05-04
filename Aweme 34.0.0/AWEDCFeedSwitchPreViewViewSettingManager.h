@interface AWEDCFeedSwitchPreViewViewSettingManager : NSObject
@property (nonatomic) BOOL switchState;
@property (nonatomic) UIViewController<AFDPrivacyHalfScreenViewControllerProtocol> doubleColumnEntryVC;
@property (nonatomic) BOOL openPanel;
- (BOOL)openPanel;
- (BOOL)c2RecommendEntrySettingSwitchDefaultOff;
- (BOOL)isDoubleColumnEntrySwitchON;
- (void)setDoubleColumnEntrySwitch:;
- (void)setOpenPanel:;
- (void)showSwitchPreviewViewPanel:isShowToast:enterMethod:;
- (void)dismissPreviewViewPanel;
- (void)setDoubleColumnEntryVC:;
- (id)doubleColumnEntryVC;
- (BOOL)isShowPanelInSettingPage;
- (id)init;
- (void).cxx_destruct;
- (void)setSwitchState:;
- (BOOL)switchState;
+ (id)sharedInstance;
@end
