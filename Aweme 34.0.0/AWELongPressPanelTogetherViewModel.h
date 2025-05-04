@interface AWELongPressPanelTogetherViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowPlayRemoteWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
