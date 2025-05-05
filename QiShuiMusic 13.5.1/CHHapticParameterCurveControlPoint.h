@interface CHHapticParameterCurveControlPoint : NSObject
@property (nonatomic) double relativeTime;
@property (nonatomic) float value;
- (id)init;
- (void)setValue:;
- (float)value;
- (double)relativeTime;
- (void)setRelativeTime:;
- (id)initWithRelativeTime:value:;
@end
