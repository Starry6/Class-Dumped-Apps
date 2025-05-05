@interface ASCOfferBackgroundStyle : NSObject
- (id)init;
- (id)_init;
- (id)copyWithZone:;
- (double)cornerRadiusForImageSize:stretchableArea:;
+ (id)defaultStyle;
+ (id)fixedCornerRadiusStyle:;
@end
