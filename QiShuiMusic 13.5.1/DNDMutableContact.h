@interface DNDMutableContact : DNDContact
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString organizationName;
@property (nonatomic) NSSet phoneNumbers;
@property (nonatomic) NSSet emailAddresses;
- (void)setLastName:;
- (id)init;
- (void)setContactIdentifier:;
- (void)setFirstName:;
- (void)setOrganizationName:;
- (void)setPhoneNumbers:;
- (void)setEmailAddresses:;
- (void)setMiddleName:;
- (void)setNickName:;
@end
