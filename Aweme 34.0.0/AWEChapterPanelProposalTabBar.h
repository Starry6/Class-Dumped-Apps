@interface AWEChapterPanelProposalTabBar : UIView
@property (nonatomic) BOOL isLocatedProposal;
@property (nonatomic) UIView proposalSubTab;
@property (nonatomic) UIView originSubTab;
@property (nonatomic) @? didSwitchTab;
- (void)configUI;
- (void)switchToProposalTab:;
- (BOOL)isLocatedProposal;
- (void)setIsLocatedProposal:;
- (void)setDidSwitchTab:;
- (id)proposalSubTab;
- (id)originSubTab;
- (id)didSwitchTab;
- (void)setProposalSubTab:;
- (void)setOriginSubTab:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
