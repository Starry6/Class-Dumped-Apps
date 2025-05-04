@interface AWEUserPersonalSearchSectionHeader : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView divider;
@property (nonatomic) NSString titleText;
@property (nonatomic) BOOL needDivider;
- (void)setNeedDivider:;
- (BOOL)needDivider;
- (void)configSubview;
- (id)initWithTitle:needDivider:;
- (void)setTitleText:;
- (id)titleText;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)divider;
- (void)setDivider:;
@end
