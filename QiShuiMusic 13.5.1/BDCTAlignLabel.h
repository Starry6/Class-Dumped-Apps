@interface BDCTAlignLabel : UILabel
@property (nonatomic) NSInteger verticalAlignment;
- (int)verticalAlignment;
- (void)setVerticalAlignment:;
- (id)initWithFrame:;
- (void)drawTextInRect:;
- (id)textRectForBounds:limitedToNumberOfLines:;
@end
