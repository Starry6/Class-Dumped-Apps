@interface TTAdSplashLabel : UILabel
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
- (void)setTextInsets:;
- (id)textInsets;
- (id)initWithFrame:;
- (void)drawTextInRect:;
- (id)textRectForBounds:limitedToNumberOfLines:;
@end
