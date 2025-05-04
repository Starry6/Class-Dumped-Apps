@interface AWELongPressPanelRelatedVideoIrrelevantViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)dislikeCollectAction;
- (void)trackForClick;
+ (id)longPressPanelViewModel;
@end
