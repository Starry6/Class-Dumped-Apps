@interface AWELongPressPanelIPhonePIPConfigViewModel : AWELongPressPanelBaseViewModel
- (BOOL)iPhoneGlobalPiPSwitchDefaultState;
- (void)updateIPhoneGlobalPiPSwitch:;
- (BOOL)needShow;
- (void)switchDidChange:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
+ (id)longPressPanelViewModel;
@end
