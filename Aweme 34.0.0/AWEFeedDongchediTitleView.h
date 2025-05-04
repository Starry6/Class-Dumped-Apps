@interface AWEFeedDongchediTitleView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) UILabel titleLabel;
- (id)referString;
- (void)setReferString:;
- (void)configureUI;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)viewTapped;
@end
