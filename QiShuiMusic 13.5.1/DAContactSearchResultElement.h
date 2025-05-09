@interface DAContactSearchResultElement : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString workPhone;
@property (nonatomic) NSString mobilePhone;
@property (nonatomic) NSString company;
@property (nonatomic) NSString title;
@property (nonatomic) NSString homePhone;
@property (nonatomic) NSString alias;
@property (nonatomic) NSString office;
@property (nonatomic) NSString serverSource;
@property (nonatomic) NSString recordName;
@property (nonatomic) NSString faxPhone;
@property (nonatomic) NSString department;
@property (nonatomic) NSString street;
@property (nonatomic) NSString city;
@property (nonatomic) NSString state;
@property (nonatomic) NSString zip;
@property (nonatomic) NSString country;
@property (nonatomic) NSData jpegPhoto;
@property (nonatomic) NSString imService;
@property (nonatomic) NSString imUsername;
@property (nonatomic) NSString uri;
@property (nonatomic) NSString buildingName;
@property (nonatomic) NSString appleFloor;
@property (nonatomic) NSString pagerNumber;
@property (nonatomic) NSString postalAddress;
@property (nonatomic) NSString homePostalAddress;
@property (nonatomic) NSString principalPath;
@property (nonatomic) NSString preferredUserAddress;
@property (nonatomic) NSArray cuAddresses;
@property (nonatomic) NSString iPhone;
@property (nonatomic) NSString mainPhone;
@property (nonatomic) NSString workFaxPhone;
@property (nonatomic) NSString identifierOnServer;
- (id)newAddressBookRecordWithSource:;
- (id)localizedStringForKey:formatArg:;
- (id)city;
- (id)emailAddress;
- (void)setLastName:;
- (id)uri;
- (id)country;
- (void)setState:;
- (void)setEmailAddress:;
- (id)alias;
- (void)setFirstName:;
- (id)firstName;
- (id)lastName;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)mobilePhone;
- (void)setDisplayName:;
- (void)setCountry:;
- (id)displayName;
- (void)encodeWithCoder:;
- (id)title;
- (void)setRecordName:;
- (id)state;
- (void).cxx_destruct;
- (id)description;
- (void)setAlias:;
- (void)setUri:;
- (BOOL)isEqual:;
- (id)recordName;
- (void)setCity:;
- (id)street;
- (void)setStreet:;
- (id)postalAddress;
- (id)principalPath;
- (void)setPrincipalPath:;
- (id)department;
- (void)setPostalAddress:;
- (id)preferredUserAddress;
- (void)setPreferredUserAddress:;
- (id)zip;
- (void)setZip:;
- (id)jpegPhoto;
- (id)company;
- (id)faxPhone;
- (id)imUsername;
- (id)imService;
- (id)workPhone;
- (id)identifierOnServer;
- (id)workFaxPhone;
- (id)appleFloor;
- (id)iPhone;
- (id)mainPhone;
- (id)homePostalAddress;
- (id)homePhone;
- (id)pagerNumber;
- (id)buildingName;
- (void)setCompany:;
- (BOOL)isEqualToDAContactSearchResultElement:;
- (void)setWorkPhone:;
- (void)setMobilePhone:;
- (void)setHomePhone:;
- (id)office;
- (void)setOffice:;
- (id)serverSource;
- (void)setServerSource:;
- (void)setFaxPhone:;
- (void)setDepartment:;
- (void)setJpegPhoto:;
- (void)setImService:;
- (void)setImUsername:;
- (void)setBuildingName:;
- (void)setAppleFloor:;
- (void)setPagerNumber:;
- (void)setHomePostalAddress:;
- (id)cuAddresses;
- (void)setCuAddresses:;
- (void)setIPhone:;
- (void)setMainPhone:;
- (void)setWorkFaxPhone:;
- (void)setIdentifierOnServer:;
+ (BOOL)supportsSecureCoding;
@end
