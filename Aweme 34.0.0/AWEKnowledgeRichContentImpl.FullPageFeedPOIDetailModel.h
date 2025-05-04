@interface AWEKnowledgeRichContentImpl.FullPageFeedPOIDetailModel : MTLModel
@property (nonatomic) NSArray items;
- (id)initWithDictionary:error:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
