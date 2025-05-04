@interface AWELongPressPanelDanmakuViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) UIView switchSettingContainerView;
@property (nonatomic) DUXSwitch switchView;
@property (nonatomic) DUXButton settingView;
- (id)aAWEPadModuleAdapter;
- (void)setSettingView:;
- (id)settingView;
- (BOOL)needShow;
- (void)switchDidChange:;
- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (void)configVMUseNewStyle;
- (id)switchSettingContainerView;
- (void)updateContainerSubViewIfNeed;
- (void)setSwitchSettingContainerView:;
- (void).cxx_destruct;
- (void)setSwitchView:;
- (id)switchView;
+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)shouldShowDanmakuWithAwemeModel:referString:enterFrom:;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;
@end
