@interface CLSensorRecorderRecordSensorTypeFor : NSObject
@property (nonatomic) double duration;
@property (nonatomic) NSInteger dataType;
- (void)setDataType:;
- (id)initWithCoder:;
- (int)dataType;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (double)duration;
+ (BOOL)supportsSecureCoding;
@end
