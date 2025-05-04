@interface AWELongPressPanelCreateMixModel : AWELongPressPanelBaseViewModel
- (void)trackShow;
- (BOOL)needShow;
- (id)enterFromForTracker;
- (void)configVM;
- (id)panelBizVMIdentifier;
+ (id)longPressPanelViewModel;
@end
