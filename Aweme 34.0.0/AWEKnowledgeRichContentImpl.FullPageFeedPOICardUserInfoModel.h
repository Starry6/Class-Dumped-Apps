@interface AWEKnowledgeRichContentImpl.FullPageFeedPOICardUserInfoModel : MTLModel
@property (nonatomic) NSArray userTags;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setUserTags:;
- (id)userTags;
+ (id)userTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
