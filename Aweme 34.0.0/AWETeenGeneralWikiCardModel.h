@interface AWETeenGeneralWikiCardModel : AWEBaseApiModel
@property (nonatomic) AWETeenEncyKnowledgeModel knowledgeInfo;
@property (nonatomic) NSArray relatedKnowledgeList;
@property (nonatomic) NSMutableDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)knowledgeInfo;
- (void)setKnowledgeInfo:;
- (id)relatedKnowledgeList;
- (void)setRelatedKnowledgeList:;
- (void).cxx_destruct;
+ (id)knowledgeInfoJSONTransformer;
+ (id)relatedKnowledgeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
