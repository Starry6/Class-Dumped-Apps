@interface CMRecordedRotationRateData : CMRotationRateData
@property (nonatomic) NSDate startDate;
- (id)startDate;
- (void)dealloc;
- (id)rotationRate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)description;
- (id)initWithData:timestamp:walltime:;
+ (BOOL)supportsSecureCoding;
@end
