@interface QLPXInitialHysteresisNumberFilter : QLPXNumberFilter
@property (nonatomic) double hysteresis;
@property (nonatomic) double outputDerivative;
- (double)hysteresis;
- (void)setHysteresis:;
- (double)updatedOutput;
- (double)outputDerivative;
@end
