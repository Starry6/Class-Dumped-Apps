@interface CVAPRRangeMeasurement : NSObject
@property (nonatomic) double measurement;
@property (nonatomic) double uncertainty;
- (double)uncertainty;
- (void)setMeasurement:;
- (double)measurement;
- (void)setUncertainty:;
@end
