@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject
@property (nonatomic) CNContactStore store;
@property (nonatomic) BOOL meContactNeedsUpdate;
@property (nonatomic) CNContact meContact;
@property (nonatomic) NSArray familyMembers;
@property (nonatomic) NSArray filteredSections;
@property (nonatomic) NSArray sections;
@property (nonatomic) NSMutableArray selectedContactItems;
@property (nonatomic) NSArray requiredKeys;
@property (nonatomic) NSString filterString;
@property (nonatomic) BOOL isShowingFamilyMemberContacts;
- (id)sections;
- (long long)sortOrder;
- (id)completeContactFromContact:fromMainStoreOnly:keysToFetch:;
- (void)setStore:;
- (void)setMeContact:;
- (id)meContact;
- (id)preferredForNameMeContactIdentifier;
- (long long)numberOfRowsInSection:;
- (id)selectedContacts;
- (BOOL)meContactNeedsUpdate;
- (void)setMeContactNeedsUpdate:;
- (id)familyMembers;
- (void).cxx_destruct;
- (void)setSections:;
- (id)store;
- (long long)numberOfSections;
- (id)preferredForNameMeContactWithKeysToFetch:;
- (id)copyWithZone:;
- (id)initWithStore:familyMembers:requiredKeys:;
- (id)titleForSection:;
- (id)contactItemForIndexPath:;
- (void)setContactItemSelected:forIndexPath:;
- (void)setFilterString:;
- (void)filterSectionsForString:;
- (void)_loadAllContactsIfNeeded;
- (void)postProcessForFamilyMembersWithContacts:;
- (id)labelForFamilyMember:;
- (id)filterString;
- (BOOL)isShowingFamilyMemberContacts;
- (void)setIsShowingFamilyMemberContacts:;
- (void)setFamilyMembers:;
- (id)filteredSections;
- (void)setFilteredSections:;
- (id)selectedContactItems;
- (void)setSelectedContactItems:;
- (id)requiredKeys;
+ (BOOL)isErrorPossiblyRelatedToExtraStores:;
@end
