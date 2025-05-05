@interface DMFControlGroupIdentifier : NSObject
@property (nonatomic) NSUUID organizationUUID;
@property (nonatomic) S groupID;
@property (nonatomic) NSString stringValue;
- (unsigned short)groupID;
- (id)init;
- (id)initWithString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)organizationUUID;
- (id)initWithOrganizationUUID:groupID:;
- (BOOL)isEqualToGroupIdentifier:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
