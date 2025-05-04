@interface AWELongPressPanelMoreShareViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowMoreShareWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
@end
