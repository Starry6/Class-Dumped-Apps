@interface CNContainerPermissions : NSObject
@property (nonatomic) BOOL canCreateContacts;
@property (nonatomic) BOOL canDeleteContacts;
@property (nonatomic) BOOL canCreateGroups;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCanCreateContacts:canDeleteContacts:canCreateGroups:;
- (BOOL)canCreateContacts;
- (BOOL)canDeleteContacts;
- (BOOL)canCreateGroups;
+ (BOOL)supportsSecureCoding;
@end
