@interface CHHapticParameterCurve : NSObject
@property (nonatomic) NSString parameterID;
@property (nonatomic) double relativeTime;
@property (nonatomic) NSArray controlPoints;
- (id)init;
- (void).cxx_destruct;
- (double)relativeTime;
- (void)setRelativeTime:;
- (id)controlPoints;
- (id)parameterID;
- (id)initWithParameterID:controlPoints:relativeTime:;
@end
