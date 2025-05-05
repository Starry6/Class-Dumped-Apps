@interface CKDistributedSiteIdentifier : NSObject
@property (nonatomic) NSData identifier;
@property (nonatomic) NSData modifier;
- (id)modifier;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:modifier:;
- (id)descriptionWithStringSiteIdentifiers;
+ (BOOL)supportsSecureCoding;
+ (id)SHADescription:;
@end
