@interface UISimpleTextPrintFormatter : UIPrintFormatter
@property (nonatomic) NSString text;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor color;
@property (nonatomic) q textAlignment;
- (id)initWithText:;
- (id)initWithAttributedText:;
@end
