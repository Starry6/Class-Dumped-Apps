@interface ASCAdamID : NSObject
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSNumber numberValue;
@property (nonatomic) q int64value;
- (id)numberValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithInt64:;
- (void)encodeWithCoder:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithNumberValue:;
- (id)initWithStringValue:;
- (long long)int64value;
+ (BOOL)supportsSecureCoding;
+ (id)invalidAdamID;
@end
