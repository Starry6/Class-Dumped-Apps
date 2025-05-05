@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier
@property (nonatomic) I leaderIP;
@property (nonatomic) S port;
@property (nonatomic) DMFControlGroupIdentifier groupIdentifier;
- (id)groupIdentifier;
- (id)initWithString:;
- (unsigned short)port;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)stringValue;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOrganizationUUID:groupID:;
- (id)initWithOrganizationUUID:groupID:leaderIP:;
- (id)initWithOrganizationUUID:groupID:leaderIP:port:;
- (BOOL)isEqualToControlSessionIdentifier:;
- (unsigned int)leaderIP;
+ (BOOL)supportsSecureCoding;
@end
