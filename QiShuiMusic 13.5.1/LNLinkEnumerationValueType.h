@interface LNLinkEnumerationValueType : LNValueType
@property (nonatomic) NSString enumerationIdentifier;
- (Class)objectClass;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)enumerationIdentifier;
- (id)initWithEnumerationIdentifier:;
- (id)typeIdentifierAsString;
+ (BOOL)supportsSecureCoding;
@end
