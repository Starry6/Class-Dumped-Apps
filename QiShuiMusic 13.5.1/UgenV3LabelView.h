@interface UgenV3LabelView : UILabel
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} calculateRect;
@property (nonatomic) NSString background;
- (id)calculateRect;
- (id)p_textRectForBounds:limitedToNumberOfLines:;
- (void)setCalculateRect:;
- (id)background;
- (void)setEdgeInsets:;
- (void)drawRect:;
- (void)setBackground:;
- (id)edgeInsets;
- (void).cxx_destruct;
- (void)drawTextInRect:;
- (id)textRectForBounds:limitedToNumberOfLines:;
@end
