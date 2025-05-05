@interface AVHapticParameterCurveValue : NSObject
@property (nonatomic) double time;
@property (nonatomic) float value;
- (void)setTime:;
- (double)time;
- (void)setValue:;
- (float)value;
@end
