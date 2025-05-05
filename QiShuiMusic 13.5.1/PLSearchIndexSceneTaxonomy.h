@interface PLSearchIndexSceneTaxonomy : PFSceneTaxonomy
- (void)enumerateKeywordAndSynonymsForScenes:usingBlock:;
- (void)enumerateKeywordAndSynonymsForSceneIdentifiers:usingBlock:;
+ (BOOL)_useHighRecallThresholds;
@end
