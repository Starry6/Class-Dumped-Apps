@interface AWELongPressPaneliPhoneAutoPlayViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)switchDidChange:;
- (id)realReferString;
- (long long)feedAutoPlayStyle;
- (long long)feedAutoPlaySwitchStyle;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (BOOL)canShowInPinchView;
+ (id)longPressPanelViewModel;
@end
