@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper
@property (nonatomic) PHObject<PHShare> originalShare;
@property (nonatomic) PHObject originalAsset;
- (void).cxx_destruct;
- (void)_prepareParticipantsWithFetchResult:;
- (void)_prepareParticipantsHelperIfNeeded;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)addParticipants:toChangeRequest:;
- (void)removeParticipants:toChangeRequest:;
- (void)setParticipants:toChangeRequest:;
- (BOOL)applyMutationsToManagedObject:error:;
- (id)originalShare;
- (void)setOriginalShare:;
- (id)originalAsset;
- (void)setOriginalAsset:;
@end
