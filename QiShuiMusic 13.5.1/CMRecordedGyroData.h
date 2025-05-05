@interface CMRecordedGyroData : CMGyroData
@property (nonatomic) Q identifier;
@property (nonatomic) NSDate startDate;
@property (nonatomic) double startTime;
@property (nonatomic) float temperature;
- (id)startDate;
- (void)dealloc;
- (unsigned long long)identifier;
- (id)rotationRate;
- (id)initWithCoder:;
- (double)startTime;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)description;
- (float)temperature;
- (id)initWithData:timestamp:walltime:identifier:;
- (void)resetWithData:timestamp:walltime:identifier:;
+ (BOOL)supportsSecureCoding;
@end
