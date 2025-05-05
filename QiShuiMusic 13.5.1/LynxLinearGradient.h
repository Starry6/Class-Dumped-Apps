@interface LynxLinearGradient : LynxGradient
@property (nonatomic) double angle;
@property (nonatomic) q directionType;
- (void)computeStartPoint:andEndPoint:withSize:;
- (void)draw:withPath:;
- (void)draw:withRect:;
- (void)setDirectionType:;
- (id)initWithArray:;
- (BOOL)isEqualTo:;
- (double)angle;
- (void)setAngle:;
- (long long)directionType;
@end
