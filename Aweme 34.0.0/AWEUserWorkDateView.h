@interface AWEUserWorkDateView : UIView
@property (nonatomic) CAGradientLayer dateMaskLayer;
@property (nonatomic) UILabel dateLabel;
- (id)dateMaskLayer;
- (void)configNewStyleWithTimeInterval:;
- (void)setDateMaskLayer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)dateLabel;
- (void)setupUI;
- (void)setDateLabel:;
@end
