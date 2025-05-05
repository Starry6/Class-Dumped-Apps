@interface TUMutableCallDisplayContext : TUCallDisplayContext
@property (nonatomic) NSString name;
@property (nonatomic) NSPersonNameComponents personNameComponents;
@property (nonatomic) NSString firstName;
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
- (id)copyWithZone:;
- (void)mergeValuesFromDisplayContext:;
+ (BOOL)supportsSecureCoding;
@end
