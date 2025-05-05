@interface CKDistributedTimestamp : NSObject
@property (nonatomic) NSData siteIdentifier;
@property (nonatomic) C modifier;
@property (nonatomic) BOOL unordered;
@property (nonatomic) CKDistributedSiteIdentifier siteIdentifierObject;
@property (nonatomic) Q clockValue;
- (unsigned char)modifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)clockValue;
- (id)initWithSiteIdentifierObject:clockValue:;
- (id)siteIdentifierObject;
- (id)siteIdentifier;
- (BOOL)unordered;
- (id)descriptionWithStringSiteIdentifiers;
- (id)initWithSiteIdentifier:clockValue:;
- (id)initWithSiteIdentifier:clockValue:modifier:unordered:;
- (long long)compareToTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
