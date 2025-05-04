@interface AWELongPressPanelBlockViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)switchDidChange:;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (id)longPressPanelViewModel;
@end
