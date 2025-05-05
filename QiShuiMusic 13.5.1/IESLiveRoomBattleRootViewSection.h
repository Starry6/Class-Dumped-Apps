@interface IESLiveRoomBattleRootViewSection : IESLiveTableViewSectionController
@property (nonatomic) @? reloadSectionAction;
@property (nonatomic) IESLiveRoomBattleRootViewModel viewModel;
- (id)reloadSectionAction;
- (void)setReloadSectionAction:;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)reloadSection;
- (double)heightForFooter;
+ (id)sectionWithViewModel:;
@end
