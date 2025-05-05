@interface CMRecordedAccelerometerData : CMAccelerometerData
@property (nonatomic) double startTime;
@property (nonatomic) Q identifier;
@property (nonatomic) NSDate startDate;
- (id)startDate;
- (void)dealloc;
- (unsigned long long)identifier;
- (id)acceleration;
- (id)initWithCoder:;
- (double)startTime;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)description;
- (id)initWithData:timestamp:walltime:identifier:;
- (void)resetWithData:timestamp:walltime:identifier:;
+ (BOOL)supportsSecureCoding;
@end
