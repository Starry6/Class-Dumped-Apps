@interface TRIAllocationStatusDefaultProvider : NSObject
- (id)init;
- (id)syncProxyWithErrorHandler:;
- (void)dealloc;
- (BOOL)enumerateActiveExperimentsForEnvironment:error:block:;
- (BOOL)enumerateSampledActiveExperimentsForEnvironment:correlationID:error:block:;
- (BOOL)enumerateSampledActiveRolloutsForCorrelationID:error:block:;
- (id)_defaultQueue;
- (void).cxx_destruct;
- (BOOL)enumerateActiveRolloutsWithError:block:;
- (id)addStatusUpdateHandlerForEnvironment:queue:block:;
- (BOOL)removeUpdateHandlerForToken:;
- (id)enumerateExperimentStatusesForEnvironment:startingFromCursor:error:block:;
- (id)activeExperimentInformationWithError:;
@end
