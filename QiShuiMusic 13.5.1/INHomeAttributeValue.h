@interface INHomeAttributeValue : NSObject
@property (nonatomic) q type;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) q integerValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) q limitValue;
@property (nonatomic) q unit;
@property (nonatomic) INHomeAttributeRange rangeValue;
- (long long)limitValue;
- (double)doubleValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)boolValue;
- (long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (long long)unit;
- (long long)integerValue;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDoubleValue:unit:;
- (id)rangeValue;
- (id)initWithBoolValue:;
- (id)initWithIntegerValue:unit:;
- (id)initWithStringValue:unit:;
- (id)initWithLimitValue:;
- (id)initWithRangeValue:;
- (id)initWithType:boolValue:doubleValue:integerValue:stringValue:limitValue:unit:rangeValue:;
+ (BOOL)supportsSecureCoding;
@end
