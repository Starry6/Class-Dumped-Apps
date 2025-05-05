@interface CardDAVAddressBookContainer : CoreDAVContainer
@property (nonatomic) NSString maxResourceSize;
@property (nonatomic) NSString maxImageSize;
@property (nonatomic) NSURL meCardURL;
@property (nonatomic) BOOL isGuardianRestricted;
@property (nonatomic) BOOL isAddressBook;
@property (nonatomic) BOOL isSharedAddressBook;
@property (nonatomic) BOOL isSearchAddressBook;
- (BOOL)isSearchAddressBook;
- (void)applyParsedProperties:;
- (id)maxResourceSize;
- (BOOL)isAddressBook;
- (void)setMeCardURL:;
- (void)setMaxImageSize:;
- (BOOL)isSharedAddressBook;
- (id)meCardURL;
- (void)setIsGuardianRestricted:;
- (void)setMaxResourceSize:;
- (void).cxx_destruct;
- (id)description;
- (id)maxImageSize;
- (BOOL)isGuardianRestricted;
+ (id)copyPropertyMappingsForParser;
@end
