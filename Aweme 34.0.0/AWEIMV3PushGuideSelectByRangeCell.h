@interface AWEIMV3PushGuideSelectByRangeCell : UITableViewCell
@property (nonatomic) UILabel leftTitleLabel;
@property (nonatomic) AWEIMPushGuideSelection model;
@property (nonatomic) UIImageView selectStateImageView;
@property (nonatomic) UIView seprateLine;
- (void)p_setupUI;
- (id)leftTitleLabel;
- (id)seprateLine;
- (void)p_changeToSelect:;
- (void)configWithModel:shouldDisplaySeprateLine:;
- (void)setLeftTitleLabel:;
- (void)setSeprateLine:;
- (id)selectStateImageView;
- (void)setSelectStateImageView:;
- (void)setModel:;
- (id)accessibilityLabel;
- (void)awakeFromNib;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:animated:;
@end
