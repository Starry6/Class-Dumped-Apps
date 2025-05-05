@interface CNContactWithNamePredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString name;
@property (nonatomic) Q options;
- (id)initWithName:options:;
- (id)initWithName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)sgContactMatchesWithSortOrder:mutableObjects:service:error:;
- (id)contactsFromCLSDataStore:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)doesPerson:matchName:;
+ (id)descriptionForOptions:;
@end
