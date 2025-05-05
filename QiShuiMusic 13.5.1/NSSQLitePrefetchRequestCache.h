@interface NSSQLitePrefetchRequestCache : NSObject
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (id)manyToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (void)dealloc;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:onEntity:;
- (id)initWithSQLCore:;
- (void).cxx_destruct;
@end
