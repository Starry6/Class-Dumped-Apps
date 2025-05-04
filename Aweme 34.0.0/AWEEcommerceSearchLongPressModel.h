@interface AWEEcommerceSearchLongPressModel : MTLModel
@property (nonatomic) NSArray dislikeInfoList;
@property (nonatomic) NSString findSimilarSchemaTemplate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dislikeInfoList;
- (id)findSimilarSchemaTemplate;
- (void)setDislikeInfoList:;
- (void)setFindSimilarSchemaTemplate:;
- (void).cxx_destruct;
+ (id)dislikeInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
