@interface TUCallDisplayContext : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSPersonNameComponents personNameComponents;
@property (nonatomic) NSString suggestedName;
@property (nonatomic) NSString label;
@property (nonatomic) NSString companyName;
@property (nonatomic) NSString mapName;
@property (nonatomic) NSString location;
@property (nonatomic) NSString contactName;
@property (nonatomic) NSString contactLabel;
@property (nonatomic) NSString callDirectoryLabel;
@property (nonatomic) NSString callDirectoryLocalizedExtensionContainingAppName;
@property (nonatomic) NSString callDirectoryExtensionIdentifier;
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSArray contactIdentifiers;
@property (nonatomic) NSInteger legacyAddressBookIdentifier;
@property (nonatomic) NSString firstName;
- (id)contactName;
- (id)contactIdentifiers;
- (id)init;
- (void)setName:;
- (void)setContactIdentifier:;
- (id)contactIdentifier;
- (void)setFirstName:;
- (id)firstName;
- (void)setLabel:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (id)location;
- (void)encodeWithCoder:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
- (id)mutableCopyWithZone:;
- (void)setContactIdentifiers:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)suggestedName;
- (void)setSuggestedName:;
- (id)personNameComponents;
- (id)companyName;
- (void)setCompanyName:;
- (id)contactLabel;
- (void)setContactLabel:;
- (int)legacyAddressBookIdentifier;
- (void)setLegacyAddressBookIdentifier:;
- (id)mapName;
- (id)callDirectoryLabel;
- (id)callDirectoryLocalizedExtensionContainingAppName;
- (id)callDirectoryExtensionIdentifier;
- (id)displayContextByMergingWithDisplayContext:;
- (void)setPersonNameComponents:;
- (void)setMapName:;
- (void)setContactName:;
- (void)setCallDirectoryLabel:;
- (void)setCallDirectoryLocalizedExtensionContainingAppName:;
- (void)setCallDirectoryExtensionIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
