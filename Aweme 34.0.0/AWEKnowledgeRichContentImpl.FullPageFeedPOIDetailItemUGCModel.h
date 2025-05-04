@interface AWEKnowledgeRichContentImpl.FullPageFeedPOIDetailItemUGCModel : MTLModel
@property (nonatomic) _TtC27AWEKnowledgeRichContentImpl32FullPageFeedPOICardUserInfoModel userInfo;
@property (nonatomic) _TtC27AWEKnowledgeRichContentImpl38FullPageFeedPOICardRelatedPOIInfoModel relatedPOIInfo;
@property (nonatomic) NSArray scoreTags;
@property (nonatomic) NSArray contentTags;
- (id)relatedPOIInfo;
- (void)setRelatedPOIInfo:;
- (id)scoreTags;
- (void)setScoreTags:;
- (id)contentTags;
- (void)setContentTags:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)scoreTagsJSONTransformer;
+ (id)contentTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
