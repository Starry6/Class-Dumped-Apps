@interface CLSensorRecorderSensorSampleRate : NSObject
@property (nonatomic) I rate;
@property (nonatomic) NSInteger dataType;
- (void)setDataType:;
- (void)setRate:;
- (unsigned int)rate;
- (id)initWithCoder:;
- (int)dataType;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
