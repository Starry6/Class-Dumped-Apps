@interface CJPayPaddingLabel : UILabel
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
- (void)setTextInsets:;
- (id)textInsets;
- (id)intrinsicContentSize;
- (void)drawTextInRect:;
- (id)textRectForBounds:limitedToNumberOfLines:;
@end
