@interface AWETeenModeSimpleItemView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWETeenModeItemLayoutModel model;
- (void)setUIAccessbilityElement;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void)setTitleLabel:;
- (void)setData:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
@end
