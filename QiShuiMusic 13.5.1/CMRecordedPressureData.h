@interface CMRecordedPressureData : CMAmbientPressureData
@property (nonatomic) double startTime;
@property (nonatomic) Q identifier;
@property (nonatomic) NSDate startDate;
- (id)startDate;
- (void)dealloc;
- (id)pressure;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (double)startTime;
- (void)encodeWithCoder:;
- (double)timestamp;
- (id)description;
- (id)temperature;
- (id)initWithData:timestamp:walltime:identifier:;
- (void)resetWithData:timestamp:walltime:identifier:;
- (long long)sr_writeUTF8RepresentationToOutputStream:;
- (BOOL)sr_prefersUTF8StringRepresentation;
+ (BOOL)supportsSecureCoding;
@end
