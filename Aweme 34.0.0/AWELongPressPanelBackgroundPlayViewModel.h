@interface AWELongPressPanelBackgroundPlayViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)onSwitchChanged:;
- (id)panelBizVMIdentifier;
- (id)commonLogParams;
- (id)init;
+ (id)longPressPanelViewModel;
+ (unsigned long long)backgroundPlayAudioOptConfig;
@end
