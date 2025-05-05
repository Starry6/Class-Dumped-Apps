@interface LNComparisonPropertyQuery : LNPropertyQuery
@property (nonatomic) NSString propertyIdentifier;
@property (nonatomic) NSNumber propertyIndex;
@property (nonatomic) LNValue value;
@property (nonatomic) Q type;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)propertyIdentifier;
- (id)initWithPropertyIndex:value:type:;
- (id)propertyIndex;
- (id)initWithPropertyIdentifier:value:type:;
+ (BOOL)supportsSecureCoding;
@end
