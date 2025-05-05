@interface LNQueryParameterComparatorMetadata : NSObject
@property (nonatomic) Q comparatorType;
@property (nonatomic) LNValueType valueType;
@property (nonatomic) NSArray resolvableInputTypes;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)valueType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)comparatorType;
- (id)resolvableInputTypes;
- (id)initWithComparatorType:valueType:resolvableInputTypes:;
+ (BOOL)supportsSecureCoding;
@end
