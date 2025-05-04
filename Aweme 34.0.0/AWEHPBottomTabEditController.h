@interface AWEHPBottomTabEditController : NSObject
@property (nonatomic) AWEHPBottomTabEditPanelViewController viewController;
@property (nonatomic) AWEHPBottomEditPanelShowContext showContext;
@property (nonatomic) AWEHPBottomEditPanelConfig config;
@property (nonatomic) @? panelDidDismiss;
@property (nonatomic) @? updateSelectedItemModel;
- (id)panelDidDismiss;
- (void)trackPanelShow;
- (void)updatePanelThemeStyle:;
- (id)currentTabID;
- (void)setPanelDidDismiss:;
- (id)updateSelectedItemModel;
- (void)setUpdateSelectedItemModel:;
- (BOOL)showPanelOnVC:context:completion:;
- (void)dismissPanelNeedAnimated:dismissType:;
- (BOOL)p_canShowPanel;
- (id)getDimissReasonWithDismissType:;
- (void)trackPanelClickWithClickLocation:selectedTabID:;
- (void)trackPanelDismissWithDismissType:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (void)setShowContext:;
- (id)showContext;
@end
