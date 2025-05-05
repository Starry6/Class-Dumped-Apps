@interface AVHapticPlayerParameterCurve : NSObject
@property (nonatomic) Q type;
@property (nonatomic) double time;
@property (nonatomic) Q shape;
@property (nonatomic) NSArray controlPoints;
- (void)setShape:;
- (void)setTime:;
- (id)init;
- (double)time;
- (unsigned long long)shape;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)controlPoints;
- (id)initWithType:relativeTime:shape:controlPoints:;
+ (BOOL)supportsSecureCoding;
@end
