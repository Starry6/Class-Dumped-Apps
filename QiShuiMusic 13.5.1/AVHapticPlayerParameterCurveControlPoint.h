@interface AVHapticPlayerParameterCurveControlPoint : NSObject
@property (nonatomic) double time;
@property (nonatomic) float value;
- (void)setTime:;
- (double)time;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (float)value;
- (id)initWithTime:value:;
+ (BOOL)supportsSecureCoding;
@end
