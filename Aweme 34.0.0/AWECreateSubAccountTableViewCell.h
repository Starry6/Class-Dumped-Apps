@interface AWECreateSubAccountTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView icon;
@property (nonatomic) AWECreateSubAccountTableViewCellModel model;
- (void)setModel:;
- (id)icon;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
