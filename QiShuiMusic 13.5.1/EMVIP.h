@interface EMVIP : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString displayName;
@property (nonatomic) EAEmailAddressSet emailAddresses;
- (id)emailAddresses;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithIdentifier:name:emailAddresses:;
- (void)_commonInitWithIdentifier:name:emailAddresses:displayName:;
- (BOOL)_isEqualToVIP:;
+ (BOOL)supportsSecureCoding;
@end
