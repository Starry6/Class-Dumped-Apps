@interface AWEIMGroupManagementTipTableViewCell : AWEIMGroupManagementBaseTableViewCell
@property (nonatomic) UILabel tipLabel;
- (void)configWithModel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
+ (double)cellHeightWithModel:;
+ (id)identifier;
@end
