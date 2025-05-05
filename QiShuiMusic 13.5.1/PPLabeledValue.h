@interface PPLabeledValue : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSObject<NSCopying><NSSecureCoding> value;
- (id)initWithLabel:value:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqualToLabeledValue:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)labeledValueWithLabel:value:;
@end
