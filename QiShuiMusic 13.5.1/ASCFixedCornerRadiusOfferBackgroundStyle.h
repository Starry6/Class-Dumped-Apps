@interface ASCFixedCornerRadiusOfferBackgroundStyle : ASCOfferBackgroundStyle
@property (nonatomic) double cornerRadius;
- (id)initWithCornerRadius:;
- (unsigned long long)hash;
- (double)cornerRadius;
- (BOOL)isEqual:;
- (double)cornerRadiusForImageSize:stretchableArea:;
@end
