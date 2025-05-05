@interface CNEmailAddressContactPredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSArray groupIdentifiers;
@property (nonatomic) BOOL returnsMultipleResults;
- (id)emailAddresses;
- (id)initWithEmailAddress:returnMultipleResults:;
- (id)shortDebugDescription;
- (id)initWithEmailAddress:groupIdentifiers:returnMultipleResults:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)returnsMultipleResults;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)groupIdentifiers;
- (id)description;
- (BOOL)isEqual:;
- (id)sgContactMatchesWithSortOrder:mutableObjects:service:error:;
- (id)contactsFromCLSDataStore:;
+ (BOOL)supportsSecureCoding;
@end
