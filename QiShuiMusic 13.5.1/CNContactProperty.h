@interface CNContactProperty : NSObject
@property (nonatomic) CNContact contact;
@property (nonatomic) NSString key;
@property (nonatomic) @ value;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString label;
- (id)property;
- (id)phoneticProperty;
- (id)contact;
- (id)key;
- (id)identifier;
- (id)labeledValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)sourceContact;
- (int)multiValueIdentifier;
+ (id)phoneticPropertiesMap;
+ (BOOL)supportsSecureCoding;
+ (id)contactPropertyWithContact:propertyKey:identifier:;
+ (id)contactPropertyWithContactNoCopy:propertyKey:identifier:;
@end
