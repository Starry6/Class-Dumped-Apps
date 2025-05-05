@interface EDMessageQueryParser : NSObject
@property (nonatomic) EDMessageQueryTransformer transformer;
@property (nonatomic) EDSearchableIndex searchableIndex;
@property (nonatomic) EFSQLObjectPropertyMapper sqlPropertyMapper;
@property (nonatomic) EFSearchableIndexObjectPropertyMapper searchableIndexMapper;
- (id)transformer;
- (void).cxx_destruct;
- (id)searchableIndex;
- (id)sqlQueryForQuery:;
- (id)initWithSchema:protectedSchema:searchableIndex:accountsProvider:vipManager:messagePersistence:mailboxPersistence:;
- (id)sqlQueryForQuery:predicate:;
- (id)sqlPropertyMapper;
- (id)searchableIndexMapper;
+ (id)performSearchableIndexQueryPredicate:propertyMapper:searchableIndex:;
@end
