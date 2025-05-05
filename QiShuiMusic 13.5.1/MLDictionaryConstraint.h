@interface MLDictionaryConstraint : NSObject
@property (nonatomic) q keyType;
- (BOOL)isAllowedValue:error:;
- (id)initWithCoder:;
- (id)initWithKeyType:;
- (void)encodeWithCoder:;
- (long long)keyType;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;
@end
