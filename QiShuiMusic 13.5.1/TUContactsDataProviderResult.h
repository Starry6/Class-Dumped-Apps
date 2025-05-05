@interface TUContactsDataProviderResult : NSObject
@property (nonatomic) NSArray contacts;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString companyName;
@property (nonatomic) NSString contactLabel;
@property (nonatomic) NSInteger legacyAddressBookIdentifier;
- (void)setLocalizedName:;
- (void)setContacts:;
- (id)contacts;
- (id)localizedName;
- (void).cxx_destruct;
- (id)description;
- (id)companyName;
- (void)setCompanyName:;
- (id)contactLabel;
- (void)setContactLabel:;
- (int)legacyAddressBookIdentifier;
- (void)setLegacyAddressBookIdentifier:;
@end
