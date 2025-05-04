@interface AWEChapterPanelProposalNavBar : AWEChapterPanelNavBar
@property (nonatomic) UILabel returnLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? returnAction;
- (void)configSubViews;
- (void)updateWithChapterList:;
- (id)returnLabel;
- (void)setReturnLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)returnAction;
- (void)setReturnAction:;
@end
