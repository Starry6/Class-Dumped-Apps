@interface GEOExperimentServerRemoteProxy : NSObject
@property (nonatomic) <GEOExperimentServerProxyDelegate> delegate;
@property (nonatomic) GEOABAssignmentResponse experimentsInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)refreshDatasetABStatus:;
- (void)setDelegate:;
- (void)_debug_setBucketIdDictionaryRepresentation:;
- (void)abAssignUUIDWithSyncCompletionHandler:;
- (void)forceUpdate;
- (id)delegate;
- (id)experimentsInfo;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)_debug_setQuerySubstring:forExperimentType:dispatcherRequestType:;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:;
- (void)abAssignUUIDWithCompletionHandler:;
- (void)_debug_fetchAllAvailableExperiments:;
@end
