@interface AWELongPressPanelReeditModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)canReedit;
- (id)editBarInfo;
+ (id)longPressPanelViewModel;
@end
