@interface INHomeAction : NSObject
@property (nonatomic) q type;
@property (nonatomic) q valueType;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) q integerValue;
@property (nonatomic) NSString stringValue;
- (double)doubleValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)boolValue;
- (long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (long long)integerValue;
- (long long)valueType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:boolValue:;
- (id)initWithType:doubleValue:;
- (id)initWithType:integerValue:;
- (id)initWithType:stringValue:;
- (id)initWithType:valueType:boolValue:doubleValue:integerValue:stringValue:;
+ (BOOL)supportsSecureCoding;
@end
