@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSInteger dataType;
- (void)setDataType:;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)initWithCoder:;
- (int)dataType;
- (double)startTime;
- (double)endTime;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
