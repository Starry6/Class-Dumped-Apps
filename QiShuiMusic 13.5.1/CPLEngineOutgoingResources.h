@interface CPLEngineOutgoingResources : CPLEngineStorage
@property (nonatomic) Q countOfOriginalImages;
@property (nonatomic) Q countOfOriginalVideos;
@property (nonatomic) Q countOfOriginalOthers;
@property (nonatomic) Q sizeOfResourcesToUpload;
@property (nonatomic) Q sizeOfOriginalResourcesToUpload;
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)openWithError:;
- (id)resourceTypesToUploadForChange:;
- (unsigned long long)availableResourceSizeForUploadIdentifier:;
- (BOOL)deleteResourcesToUploadWithUploadIdentifier:error:;
- (BOOL)shouldUploadResource:;
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (BOOL)storeResourcesToUpload:withUploadIdentifier:shouldCheckResources:error:;
- (unsigned long long)countOfOriginalImages;
- (unsigned long long)sizeOfResourcesToUpload;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)countOfOriginalOthers;
- (unsigned long long)countOfOriginalVideos;
@end
