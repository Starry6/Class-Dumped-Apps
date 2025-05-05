@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop
- (double)opacity;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isOpacityStop;
- (id)initWithLocation:opacity:;
- (double)opacityLocation;
+ (id)opacityStopWithLocation:opacity:;
@end
