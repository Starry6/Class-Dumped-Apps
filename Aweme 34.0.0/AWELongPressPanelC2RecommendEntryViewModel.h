@interface AWELongPressPanelC2RecommendEntryViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)onSwitchChanged:;
- (id)panelBizVMIdentifier;
- (id)commonTrackParamsWithBizVM:;
- (void)trackSquareInterectedSettingClick:;
- (id)init;
+ (id)longPressPanelViewModel;
@end
