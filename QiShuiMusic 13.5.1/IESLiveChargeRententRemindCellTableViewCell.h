@interface IESLiveChargeRententRemindCellTableViewCell : UITableViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel label;
- (void)updateWithCellModel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setSelected:animated:;
- (void)awakeFromNib;
- (id)icon;
- (void)setLabel:;
- (id)label;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setupUI;
@end
