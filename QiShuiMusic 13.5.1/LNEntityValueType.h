@interface LNEntityValueType : LNValueType
@property (nonatomic) NSString typeName;
@property (nonatomic) NSString identifier;
- (Class)objectClass;
- (id)typeName;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)metadataClassesForCoding;
- (id)initWithTypeName:;
+ (BOOL)supportsSecureCoding;
@end
