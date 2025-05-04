@interface AWEAnchorAdditionSectionHeaderView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView rightView;
@property (nonatomic) @? clickBlock;
@property (nonatomic) q sectionType;
@property (nonatomic) q anchorType;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)updateUIWithModel:;
- (void)rightTapAction:;
- (long long)sectionType;
- (id)initWithFrame:;
- (void)setSectionType:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (long long)anchorType;
- (id)titleLabel;
- (id)rightView;
- (void)setRightView:;
- (void)setupUI;
- (id)rightLabel;
- (void)setRightLabel:;
- (void)setAnchorType:;
- (void)updateTitle:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
