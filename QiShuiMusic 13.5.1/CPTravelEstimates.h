@interface CPTravelEstimates : NSObject
@property (nonatomic) Q timeRemainingColor;
@property (nonatomic) NSMeasurement distanceRemainingDisplay;
@property (nonatomic) NSMeasurement distanceRemaining;
@property (nonatomic) double timeRemaining;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)timeRemaining;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)distanceRemaining;
- (id)initWithDistanceRemaining:timeRemaining:;
- (id)initWithDistanceRemaining:distanceRemainingDisplay:timeRemaining:;
- (unsigned long long)timeRemainingColor;
- (void)setTimeRemainingColor:;
- (id)distanceRemainingDisplay;
+ (BOOL)supportsSecureCoding;
+ (id)timeRemainingColorForColor:;
+ (id)_greenColor;
+ (id)_redColor;
+ (id)_orangeColor;
@end
