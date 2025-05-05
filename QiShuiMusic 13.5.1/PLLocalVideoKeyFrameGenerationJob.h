@interface PLLocalVideoKeyFrameGenerationJob : NSObject
@property (nonatomic) NSManagedObjectID assetObjectID;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) PLPhotoLibraryPathManagerIdentifier libraryID;
- (id)libraryID;
- (id)init;
- (unsigned long long)hash;
- (void)addCompletionHandler:;
- (void).cxx_destruct;
- (void)setNetworkAccessAllowed:;
- (BOOL)isEqual:;
- (void)setLibraryID:;
- (BOOL)networkAccessAllowed;
- (id)assetObjectID;
- (void)setAssetObjectID:;
- (BOOL)isEqualToJob:;
- (void)callCompletionHandlersWithMutatedMoc:error:storedRecipes:affectedRecipes:sourceMetadata:;
@end
