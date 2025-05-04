@interface AWELongPressPanelAITextViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:;
- (void)longPressVideotoTextAction;
+ (BOOL)shouldShowAiTextWithAwemeModel:referString:;
+ (id)longPressPanelViewModel;
@end
