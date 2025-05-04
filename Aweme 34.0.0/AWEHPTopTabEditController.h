@interface AWEHPTopTabEditController : NSObject
@property (nonatomic) AWEHPTopTabEditPanelViewController viewController;
@property (nonatomic) AWEHPEditPanelConfig config;
@property (nonatomic) <AWEPzEngineProtocol> engine;
@property (nonatomic) <AWEPzComponentProtocol> pzComponent;
@property (nonatomic) @? panelDidDismiss;
- (id)panelDidDismiss;
- (BOOL)isEditPanelEnabled;
- (BOOL)isEditPanelShowing;
- (void)setPanelDidDismiss:;
- (long long)p_canShowPanel;
- (BOOL)tryShowPanelWithEnterMethod:;
- (void)trackLongPressEditTabCheck:;
- (id)setupEditPanelConfigWithEnterMethod:;
- (void)setPzComponent:;
- (void)printAllItemsWith:ReferString:;
- (id)pzComponent;
- (void)setConfig:;
- (id)engine;
- (id)initWithConfig:;
- (id)config;
- (id)viewController;
- (void)setEngine:;
- (void).cxx_destruct;
- (void)setViewController:;
@end
