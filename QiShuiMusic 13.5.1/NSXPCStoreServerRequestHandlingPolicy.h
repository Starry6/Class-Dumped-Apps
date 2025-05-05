@interface NSXPCStoreServerRequestHandlingPolicy : NSObject
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:;
- (id)restrictingPullChangeHistoryPredicateForEntity:fromClientWithContext:;
- (id)processRequest:fromClientWithContext:error:;
- (id)allowableClassesForClientWithContext:;
- (id)restrictingWritePredicateForEntity:fromClientWithContext:;
- (id)processFaultForRelationshipWithName:onObjectWithID:fromClientWithContext:error:;
- (id)processFaultForObjectWithID:fromClientWithContext:error:;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:;
- (id)restrictingReadPredicateForEntity:fromClientWithContext:;
@end
