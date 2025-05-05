@interface PLSearchIndexSceneTaxonomyProvider : NSObject
@property (nonatomic) PLSearchIndexSceneTaxonomy latestSceneTaxonomy;
@property (nonatomic) PLSearchIndexSceneTaxonomy previousSceneTaxonomy;
@property (nonatomic) NSString digests;
- (void)setPreviousSceneTaxonomy:;
- (void)setLatestSceneTaxonomy:;
- (id)digests;
- (id)latestSceneTaxonomy;
- (void).cxx_destruct;
- (id)description;
- (id)previousSceneTaxonomy;
- (id)searchIndexSceneTaxonomyForSceneAnalysisVersion:;
@end
