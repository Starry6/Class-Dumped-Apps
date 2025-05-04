@interface AWEStudioUnusedDraftResourceManager : NSObject
@property (nonatomic) NSMutableDictionary resourceTimeCache;
- (void)processDraftsResources;
- (BOOL)filePath:matchesPattern:;
- (id)findMatchedPatternForFile:;
- (BOOL)isResourceUnused:;
- (id)convertResourceNodesToPathStrings:draftFolder:;
- (id)referencedResourcePathsInDraftFolder:;
- (id)loadPendingDeleteDateForResource:;
- (void)savePendingDeleteDateForResource:;
- (id)moveResourceToTmpDirectory:;
- (id)shouldSoftDeleteFile:referencedPaths:;
- (void)softDeleteResource:;
- (void)rollbackUnusedResourcesInDraft:;
- (void)softDeleteResourcesInDraftFolder:;
- (void)processSingleDraftResources:;
- (void)removePendingDeleteDateForResource:;
- (id)resourceTimeCache;
- (id)latestAccessTimeOfDirectory:;
- (void)setResourceTimeCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
