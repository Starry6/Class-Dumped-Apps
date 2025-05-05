@interface PLLibraryScopeTransactionResult : NSObject
@property (nonatomic) NSPersistentHistoryToken lastProcessedCoreDataToken;
@property (nonatomic) NSArray assetObjectIDs;
@property (nonatomic) NSArray detectedFaceObjectIDs;
- (void).cxx_destruct;
- (id)lastProcessedCoreDataToken;
- (id)initWithToken:assetObjectIDs:detectedFaceObjectIDs:;
- (id)assetObjectIDs;
- (id)detectedFaceObjectIDs;
@end
