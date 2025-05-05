@interface CVATimedValue : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) Q syncTimestamp;
@property (nonatomic) Q frameId;
@property (nonatomic) NSObject<NSSecureCoding> value;
- (id)dictionary;
- (id)initWithDictionary:;
- (unsigned long long)frameId;
- (id)initWithCoder:;
- (void)setFrameId:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)value;
- (unsigned long long)syncTimestamp;
- (void)setSyncTimestamp:;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
