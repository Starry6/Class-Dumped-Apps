@interface CNUICoreFamilyMemberContactItem : NSObject
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSString formattedName;
@property (nonatomic) NSData imageData;
@property (nonatomic) BOOL isUnreachable;
@property (nonatomic) BOOL isProposed;
@property (nonatomic) q contactType;
@property (nonatomic) q whitelistStatus;
@property (nonatomic) BOOL hasBeenPersisted;
- (id)init;
- (id)contactIdentifier;
- (id)imageData;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)formattedName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithContactIdentifier:;
- (BOOL)hasBeenPersisted;
- (long long)contactType;
- (BOOL)isUnreachable;
- (id)initWithContactIdentifier:formattedName:imageData:isUnreachable:isProposed:contactType:whitelistStatus:hasBeenPersisted:;
- (BOOL)isProposed;
- (long long)whitelistStatus;
+ (BOOL)supportsSecureCoding;
@end
