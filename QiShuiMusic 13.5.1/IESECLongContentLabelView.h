@interface IESECLongContentLabelView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) IESECUIImageView backgroundImageView;
- (void)configLabelWithElement:padding:;
- (void)configLabelWithElement:;
- (id)backgroundImageView;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)rightLabel;
- (void)setBackgroundImageView:;
- (void)setRightLabel:;
@end
