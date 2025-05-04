@interface AWERecognitionLeadTipView : UIView
@property (nonatomic) UIImageView longPressTipImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
- (void)setLongPressTipImageView:;
- (id)longPressTipImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)titleLabel;
- (id)contentLabel;
- (void)setupViews;
@end
