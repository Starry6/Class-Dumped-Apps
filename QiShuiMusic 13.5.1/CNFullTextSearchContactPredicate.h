@interface CNFullTextSearchContactPredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString searchString;
@property (nonatomic) NSArray containerIdentifiers;
@property (nonatomic) NSArray groupIdentifiers;
- (id)searchString;
- (id)initWithCoder:;
- (id)containerIdentifiers;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)groupIdentifiers;
- (id)description;
- (id)sgContactMatchesWithSortOrder:mutableObjects:service:error:;
- (id)initWithSearchString:containerIdentifiers:groupIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
