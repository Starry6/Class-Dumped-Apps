@interface AMSTreatmentStore : NSObject
@property (nonatomic) AMSLRUCache areasCache;
@property (nonatomic) AMSLRUCache treatmentsCache;
- (id)init;
- (void)dealloc;
- (id)areasForNamespaces:;
- (id)_treatmentStoreService;
- (void)_cacheAreas:forNamespace:;
- (void)_treatmentsDidSyncronize:;
- (id)_cachedTreatmentForArea:;
- (id)areasCache;
- (id)_cachedAreasForNamespace:;
- (void).cxx_destruct;
- (id)treatmentsPayloadForAreas:;
- (id)synchronizeTreatments;
- (id)experimentDataForAreas:;
- (id)treatmentsCache;
- (id)_cachedAreasForTopic:;
- (void)_cacheTreatment:forArea:;
- (id)treatmentsForAreas:;
- (id)areasForTopics:;
- (void)_cacheAreas:forTopic:;
+ (BOOL)attemptConnectionInTests;
+ (id)defaultTreatmentStore;
+ (void)setAttemptConnectionInTests:;
@end
