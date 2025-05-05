@interface PFSceneGeography : PFCachingArchiveIndex
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:fileSize:;
- (id)indexLabel;
- (void).cxx_destruct;
- (BOOL)indexSupported;
- (id)archiveLineParserForIndexPath:;
- (BOOL)loadOrCreateIndex;
- (id).cxx_construct;
- (id)indexName;
- (double)scoreForPOI:scenes:maxScenesCount:;
- (id)dataArchivePath;
- (id)scenesByScoreForPOIHash:;
@end
