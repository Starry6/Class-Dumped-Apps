@interface AWELeftSideBarFunctionMoreButton : DUXBaseButton
@property (nonatomic) UILabel label;
@property (nonatomic) DUXBaseImageView arrowImageView;
@property (nonatomic) DUXBadge dotBadge;
- (void)initLabel;
- (void)initView;
- (id)dotBadge;
- (void)setDotBadge:;
- (void)updateTitleLabelText:;
- (void)initBadge;
- (void)initArrowImageView;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createLabel;
- (void)setBadgeHidden:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
