@interface IESLiveRevenueInteractQuitView : HTSLivePopUpView
@property (nonatomic) @? confirmBlock;
@property (nonatomic) @? relinkAnchorBlock;
@property (nonatomic) @? leaveWithTeamMateBlock;
- (id)confirmBlock;
- (id)leaveWithTeamMateBlock;
- (void)onCancelButtonClicked;
- (void)onChooseAnchorClicked;
- (void)onConfirmButtonClicked;
- (void)onLeaveWithTeamMateClicked;
- (id)relinkAnchorBlock;
- (void)setConfirmBlock:;
- (void)setLeaveWithTeamMateBlock:;
- (void)setRelinkAnchorBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
