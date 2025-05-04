@interface AWELongPressPanelDuetViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowDuetWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
@end
