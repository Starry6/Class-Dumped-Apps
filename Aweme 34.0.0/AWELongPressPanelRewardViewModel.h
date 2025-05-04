@interface AWELongPressPanelRewardViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (BOOL)shouldShowRewardWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
