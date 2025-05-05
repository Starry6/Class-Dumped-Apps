@interface CLSensorRecorderSensorMetaRequestById : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) NSInteger dataType;
- (void)setDataType:;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (int)dataType;
- (void)encodeWithCoder:;
- (void)setIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
