@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext
@property (nonatomic) NSFetchRequest request;
@property (nonatomic) NSSQLiteStatement fetchStatement;
@property (nonatomic) BOOL isFaultRequest;
@property (nonatomic) BOOL shouldUseBatches;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (id)manyToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (BOOL)isFaultRequest;
- (void)dealloc;
- (void)visitPredicate:;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:onEntity:;
- (void)executePrologue;
- (id)_createStatement;
- (id)request;
- (void)executeEpilogue;
- (BOOL)shouldUseBatches;
- (void)visitPredicateExpression:;
- (BOOL)executeRequestCore:;
- (void)setIsFaultRequest:;
- (void)setFetchStatement:;
- (id)createChildContextForNestedFetchRequest:;
- (id)fetchStatement;
- (id)initWithRequest:context:sqlCore:;
@end
