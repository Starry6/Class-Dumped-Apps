@interface AWEPOIContentLabel : UIView
@property (nonatomic) BOOL autoZeroContentIfFirstLetterClipped;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) UILabel label;
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
- (BOOL)autoZeroContentIfFirstLetterClipped;
- (void)setAutoZeroContentIfFirstLetterClipped:;
- (void)setLabel:;
- (void)setContentInsets:;
- (id)attributedText;
- (id)intrinsicContentSize;
- (void)setText:;
- (id)contentInsets;
- (id)initWithFrame:;
- (id)text;
- (void)setTextColor:;
- (id)label;
- (void)setAttributedText:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (void)layoutSubviews;
- (id)textColor;
@end
