@interface PLLocationOfInterestVisit : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSDateInterval visitInterval;
@property (nonatomic) double confidence;
@property (nonatomic) PLLocationOfInterest locationOfInterest;
- (double)confidence;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithIdentifier:visitInterval:confidence:;
- (void)setLocationOfInterest:;
- (id)visitInterval;
- (id)locationOfInterest;
+ (BOOL)supportsSecureCoding;
@end
