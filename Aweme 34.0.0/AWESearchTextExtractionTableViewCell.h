@interface AWESearchTextExtractionTableViewCell : UITableViewCell
@property (nonatomic) AWESearchTextExtractionModel model;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectIdentifer;
@property (nonatomic) UIView selectBackView;
- (id)selectBackView;
- (id)selectIdentifer;
- (void)setSelectIdentifer:;
- (void)setSelectBackView:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
