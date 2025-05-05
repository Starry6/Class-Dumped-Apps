@interface UgenLabelView : UILabel
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) NSString background;
@property (nonatomic) double paddingLeft;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingBottom;
- (id)background;
- (void)setEdgeInsets:;
- (void)drawRect:;
- (void)setBackground:;
- (double)paddingBottom;
- (double)paddingRight;
- (double)paddingTop;
- (void)setPaddingRight:;
- (id)edgeInsets;
- (void)setPaddingBottom:;
- (void)setPaddingLeft:;
- (void).cxx_destruct;
- (void)setPaddingTop:;
- (double)paddingLeft;
- (void)drawTextInRect:;
- (id)textRectForBounds:limitedToNumberOfLines:;
@end
