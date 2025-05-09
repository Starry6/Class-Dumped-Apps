@interface SAABPersonSearch : SADomainCommand
@property (nonatomic) NSURL accountIdentifier;
@property (nonatomic) SALocation address;
@property (nonatomic) NSDate birthday;
@property (nonatomic) NSString company;
@property (nonatomic) SAEmail email;
@property (nonatomic) NSNumber me;
@property (nonatomic) NSString name;
@property (nonatomic) SAPhone phone;
@property (nonatomic) NSString relationship;
@property (nonatomic) NSString scope;
- (void)setMe:;
- (void)setBirthday:;
- (void)setName:;
- (id)groupIdentifier;
- (void)setScope:;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (id)me;
- (id)relationship;
- (id)scope;
- (id)birthday;
- (void)setRelationship:;
- (void)setAddress:;
- (BOOL)requiresResponse;
- (void)setEmail:;
- (id)encodedClassName;
- (id)phone;
- (id)email;
- (id)address;
- (id)name;
- (void)setPhone:;
- (id)company;
- (BOOL)mutatingCommand;
- (void)setCompany:;
+ (id)personSearch;
+ (id)personSearchWithDictionary:context:;
@end
