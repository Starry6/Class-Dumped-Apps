@interface CNAutocompleteRecentContactsTransform : NSObject
@property (nonatomic) NSString priorityDomainForSorting;
@property (nonatomic) NSString sendingAddress;
@property (nonatomic) NSArray otherAddressesAlreadyChosen;
@property (nonatomic) NSString searchString;
@property (nonatomic) CRRecentContactsLibrary library;
- (void)setSearchString:;
- (id)searchString;
- (void)setLibrary:;
- (id)library;
- (void).cxx_destruct;
- (void)setOtherAddressesAlreadyChosen:;
- (void)setSendingAddress:;
- (id)sendingAddress;
- (id)otherAddressesAlreadyChosen;
- (id)priorityDomainForSorting;
- (void)setPriorityDomainForSorting:;
+ (id)transformForRequest:library:;
+ (id)resultTransformWithFactory:membersFactory:chosenAddressHashes:searchString:library:;
+ (id)autocompleteResultForRecent:factory:membersFactory:chosenAddressHashes:searchString:library:;
+ (id)groupAutocompleteResultForRecent:factory:membersFactory:chosenAddressHashes:searchString:;
+ (id)contactAutocompleteResultForRecent:factory:completesChosenGroup:;
+ (long long)addressTypeForRecentContact:;
@end
