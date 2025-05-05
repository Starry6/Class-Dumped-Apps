@interface ML3SpotlightMatchPredicate : ML3Predicate
@property (nonatomic) NSString searchString;
- (id)SQLJoinClausesForClass:;
- (void)appendSQLToMutableString:entityClass:;
- (id)spotlightPredicate;
- (void)dealloc;
- (id)searchString;
- (id)initWithSearchString:matchingProperties:;
+ (id)predicateWithProperties:searchString:;
@end
