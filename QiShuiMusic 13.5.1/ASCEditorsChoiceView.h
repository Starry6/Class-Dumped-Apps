@interface ASCEditorsChoiceView : UIView
@property (nonatomic) UIColor color;
@property (nonatomic) UILabel titleLabel;
- (void)drawRect:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void)setColor:;
- (id)accessibilityLabel;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (id)color;
- (void)encodeWithCoder:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (id)leftLaurel;
+ (id)rightLaurel;
+ (id)editorsChoiceText;
+ (double)laurelPadding;
+ (id)editorsChoiceFont;
@end
