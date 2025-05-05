@interface CNContactsWithIdentifiersPredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray identifiers;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithIdentifiers:;
- (id)internalIdentifiersForStoreWithIdentifier:;
- (id)identifiers;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)suggestionsWithSortOrder:mutableObjects:service:error:;
- (BOOL)isEqual:;
- (id)contactsFromDonationStore:;
+ (BOOL)supportsSecureCoding;
@end
