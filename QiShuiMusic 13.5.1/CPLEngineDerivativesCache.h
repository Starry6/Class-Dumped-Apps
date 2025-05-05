@interface CPLEngineDerivativesCache : NSObject
@property (nonatomic) NSURL cacheURL;
@property (nonatomic) # derivativeGeneratorClass;
- (id)initWithCacheURL:;
- (void)_updateChange:fromOldChange:withResources:excludeImages:;
- (Class)derivativeGeneratorClass;
- (id)_folderNameForReferenceResource:adjustment:includePosterFrame:;
- (void)noteGeneratedResouces:haveBeenGeneratedForReferenceResource:adjustment:includePosterFrame:;
- (void)_createCacheFolderIfNecessary;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:adjustment:includePosterFrame:;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:adjustment:includePosterFrame:;
- (void).cxx_destruct;
- (BOOL)_checkResource:name:error:;
- (void)discardCache;
- (id)tempFolderURLForGeneratedResourcesWithReferenceResource:adjustment:includePosterFrame:;
- (BOOL)_isUnsupportedFormatError:;
- (void)generateDerivativesForChange:derivativesFilter:completionHandler:;
- (void)setDerivativeGeneratorClass:;
- (id)_cacheKeyForReferenceResource:adjustments:includePosterFrame:;
- (id)cacheURL;
- (id)cachedResourcesForReferenceResource:adjustment:includePosterFrame:;
- (BOOL)_checkGeneratedResources:error:;
@end
