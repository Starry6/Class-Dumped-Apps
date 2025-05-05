@interface CUIPSDGradientStop : NSObject
- (id)initWithLocation:;
- (id)initWithCoder:;
- (double)location;
- (void)encodeWithCoder:;
- (void)setLocation:;
- (id)copyWithZone:;
- (BOOL)isDoubleStop;
- (BOOL)isColorStop;
- (BOOL)isOpacityStop;
@end
