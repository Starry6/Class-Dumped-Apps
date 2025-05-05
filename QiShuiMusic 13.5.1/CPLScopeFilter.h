@interface CPLScopeFilter : NSObject
@property (nonatomic) NSSet includedScopeIdentifiers;
@property (nonatomic) NSSet excludedScopeIdentifiers;
@property (nonatomic) NSString simpleDescription;
- (void).cxx_destruct;
- (id)description;
- (id)simpleDescription;
- (id)_setOfScopeIdentifiersFromEnumeration:;
- (id)initWithIncludedScopeIdentifiers:;
- (id)initWithExcludedScopeIdentifiers:;
- (BOOL)filterOnScopeIdentifier:;
- (id)includedScopeIdentifiers;
- (id)excludedScopeIdentifiers;
@end
