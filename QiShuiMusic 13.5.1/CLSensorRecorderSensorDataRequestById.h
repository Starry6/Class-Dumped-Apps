@interface CLSensorRecorderSensorDataRequestById : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) Q metaIdentifier;
@property (nonatomic) NSInteger dataType;
- (void)setDataType:;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (int)dataType;
- (void)encodeWithCoder:;
- (void)setIdentifier:;
- (unsigned long long)metaIdentifier;
- (void)setMetaIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
