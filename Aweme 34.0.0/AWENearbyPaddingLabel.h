@interface AWENearbyPaddingLabel : UILabel
- (id)initWithInset:;
- (void)drawTextInRect:;
- (id)intrinsicContentSize;
- (void)sizeToFit;
@end
