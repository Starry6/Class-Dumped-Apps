@interface SGSimpleNamedEmailAddress : NSObject
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString name;
- (id)emailAddress;
- (id)init;
- (id)serialized;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithName:emailAddress:;
- (id)initWithNamedHandle:;
- (BOOL)isEqualToNamedEmailAddress:;
- (id)asCSPerson;
+ (BOOL)supportsSecureCoding;
+ (id)namedEmailAddressWithFieldValue:;
+ (id)namedEmailAddressWithCSPerson:;
+ (id)namedEmailAddressesWithFieldValues:;
+ (id)namedEmailAddressesWithEmailToNameDictionary:;
+ (id)emailToNameDictionaryWithNamedEmailAddresses:;
+ (id)serializeAll:;
@end
