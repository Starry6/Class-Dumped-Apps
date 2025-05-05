@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)leadOutColor;
- (BOOL)isDoubleStop;
- (id)initWithLocation:leadInColor:leadOutColor:;
- (id)leadInColor;
+ (id)doubleColorStopWithLocation:leadInColor:leadOutColor:;
@end
