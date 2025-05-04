@interface AWELongPressPanelBarrageViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (BOOL)canShowBubble;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (BOOL)bulletStatus;
+ (id)longPressPanelViewModel;
@end
