@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (double)leadOutOpacity;
- (BOOL)isDoubleStop;
- (id)initWithLocation:leadInOpacity:leadOutOpacity:;
- (double)leadInOpacity;
+ (id)doubleOpacityStopWithLocation:leadInOpacity:leadOutOpacity:;
@end
