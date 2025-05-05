@interface STVersionVectorNode : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setCount:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (void)increment;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)join:;
- (BOOL)isEqualToNode:;
+ (BOOL)supportsSecureCoding;
@end
