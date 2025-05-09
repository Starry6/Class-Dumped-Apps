@interface TISupplementalPersonItem : TISupplementalItem
@property (nonatomic) NSString givenName;
@property (nonatomic) NSString phoneticGivenName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString phoneticMiddleName;
@property (nonatomic) NSString familyName;
@property (nonatomic) NSString phoneticFamilyName;
@property (nonatomic) NSString organizationName;
@property (nonatomic) NSString phoneticOrganizationName;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString previousFamilyName;
@property (nonatomic) NSPersonNameComponents personNameComponents;
- (id)givenName;
- (void)setFamilyName:;
- (void)setPhoneticMiddleName:;
- (id)initWithContact:;
- (id)familyName;
- (id)phoneticGivenName;
- (void)setGivenName:;
- (id)middleName;
- (id)initWithCoder:;
- (id)nickname;
- (void)setOrganizationName:;
- (void)encodeWithCoder:;
- (void)setPhoneticFamilyName:;
- (void).cxx_destruct;
- (id)description;
- (id)phoneticMiddleName;
- (void)setNickname:;
- (id)organizationName;
- (id)phoneticFamilyName;
- (void)setMiddleName:;
- (void)setPhoneticGivenName:;
- (id)initWithPersonNameComponents:;
- (id)phoneticOrganizationName;
- (void)setPhoneticOrganizationName:;
- (id)previousFamilyName;
- (id)personNameComponents;
- (void)setPreviousFamilyName:;
+ (BOOL)supportsSecureCoding;
@end
