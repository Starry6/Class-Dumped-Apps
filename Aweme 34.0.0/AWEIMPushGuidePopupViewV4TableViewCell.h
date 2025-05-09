@interface AWEIMPushGuidePopupViewV4TableViewCell : UITableViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel leftTitleLabel;
@property (nonatomic) AWEIMPushGuideV4Selection model;
@property (nonatomic) UIImageView selectStateImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView seprateLine;
@property (nonatomic) Q corner;
- (void)p_setupUI;
- (id)leftTitleLabel;
- (id)seprateLine;
- (void)p_changeToSelect:;
- (void)setLeftTitleLabel:;
- (void)setSeprateLine:;
- (id)selectStateImageView;
- (void)setSelectStateImageView:;
- (void)configWithModel:shouldDisplaySeprateLine:corner:;
- (void)setModel:;
- (id)accessibilityLabel;
- (id)containerView;
- (void)awakeFromNib;
- (id)model;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:animated:;
- (unsigned long long)corner;
- (void)setIconImageView:;
- (void)setCorner:;
@end
