@interface CURangingMeasurement : NSObject
@property (nonatomic) double horizontalAngle;
@property (nonatomic) double horizontalError;
@property (nonatomic) double verticalAngle;
@property (nonatomic) double verticalError;
@property (nonatomic) double distanceMeters;
@property (nonatomic) double distanceError;
@property (nonatomic) NSError error;
@property (nonatomic) I flags;
@property (nonatomic) NSString identifier;
@property (nonatomic) double ptsScore;
@property (nonatomic) Q timestampTicks;
- (void)setError:;
- (id)identifier;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setFlags:;
- (unsigned int)flags;
- (void)setIdentifier:;
- (double)distanceMeters;
- (void)setDistanceMeters:;
- (double)distanceError;
- (void)setDistanceError:;
- (double)horizontalAngle;
- (void)setHorizontalAngle:;
- (double)horizontalError;
- (void)setHorizontalError:;
- (double)verticalAngle;
- (void)setVerticalAngle:;
- (double)verticalError;
- (void)setVerticalError:;
- (double)ptsScore;
- (void)setPtsScore:;
- (unsigned long long)timestampTicks;
- (void)setTimestampTicks:;
+ (BOOL)supportsSecureCoding;
@end
