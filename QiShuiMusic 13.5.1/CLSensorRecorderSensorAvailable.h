@interface CLSensorRecorderSensorAvailable : NSObject
@property (nonatomic) NSInteger dataType;
- (void)setDataType:;
- (id)initWithCoder:;
- (int)dataType;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
