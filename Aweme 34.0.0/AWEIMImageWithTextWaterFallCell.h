@interface AWEIMImageWithTextWaterFallCell : AWEIMImageWaterFallCell
@property (nonatomic) UILabel textLabel;
- (void)configWithItem:;
- (void)p_setupSubUI;
- (void)p_updateSubUIWithItem:;
- (void)p_updateTextLayoutWithPosition:height:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
+ (id)identifier;
@end
