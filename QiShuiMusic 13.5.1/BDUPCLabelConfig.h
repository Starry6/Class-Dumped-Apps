@interface BDUPCLabelConfig : BDUPCViewConfig
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSNumber textAlignment;
@property (nonatomic) NSAttributedString attributedText;
- (void)setAttributedText:;
- (void)setText:;
- (void)setFont:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
- (id)textAlignment;
- (void)setTextAlignment:;
- (id)attributedText;
- (id)text;
@end
