@interface AWELongPressPanelSpecialFollowViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) BOOL hadShow;
- (BOOL)needShow;
- (void)switchDidChange:;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)clickedInfoIcon;
- (BOOL)hadShow;
- (void)setHadShow:;
- (id)specialLogExtra;
- (void)dissMissToShowSpecialFollowGuideIfNeeded;
+ (id)longPressPanelViewModel;
@end
