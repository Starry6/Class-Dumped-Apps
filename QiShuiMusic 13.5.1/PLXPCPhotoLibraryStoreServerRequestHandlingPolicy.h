@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy
- (id)init;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:;
- (id)restrictingPullChangeHistoryPredicateForEntity:fromClientWithContext:;
- (void)dealloc;
- (id)_restrictedEntityNamesAllowedForContext:;
- (id)_entityNamesAllowedByRestrictedDataEntitlements:;
- (void)limitedLibraryFetchFiltersUpdated:;
- (id)processRequest:fromClientWithContext:error:;
- (id)allowableClassesForClientWithContext:;
- (id)initWithConnectionAuthorization:;
- (id)restrictingWritePredicateForEntity:fromClientWithContext:;
- (void)setCrashLogMessageForRequest:context:;
- (void)clearCrashLogMessage;
- (id)processFaultForRelationshipWithName:onObjectWithID:fromClientWithContext:error:;
- (void).cxx_destruct;
- (id)processFaultForObjectWithID:fromClientWithContext:error:;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:;
- (id)restrictingReadPredicateForEntity:fromClientWithContext:;
@end
