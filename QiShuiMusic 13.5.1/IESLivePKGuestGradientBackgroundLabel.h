@interface IESLivePKGuestGradientBackgroundLabel : UILabel
@property (nonatomic) CAGradientLayer layer;
@property (nonatomic) {UIEdgeInsets=dddd} textInsets;
- (void)setTextInsets:;
- (id)textInsets;
- (id)layer;
- (void)drawTextInRect:;
- (id)textRectForBounds:limitedToNumberOfLines:;
+ (Class)layerClass;
@end
