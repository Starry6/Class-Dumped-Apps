@interface LNResolvableInputMetadata : NSObject
@property (nonatomic) q kind;
@property (nonatomic) NSString queryType;
@property (nonatomic) LNValueType valueType;
- (long long)kind;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)queryType;
- (id)valueType;
- (BOOL)isEqual:;
- (id)initWithQueryType:;
- (id)copyWithZone:;
- (id)initWithValueType:;
+ (BOOL)supportsSecureCoding;
@end
