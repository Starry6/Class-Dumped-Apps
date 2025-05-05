@interface MUIKit.MUIHollowLabel : UILabel
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor backgroundColor;
- (id)initWithIESIMFontSize:isBold:textColor:text:;
- (id)init;
- (void)drawRect:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)drawTextInRect:;
@end
