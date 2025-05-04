@interface AWETemplateBarRelatedSearchModel : AWEBaseApiModel
@property (nonatomic) AWESearchAnchorListModel suggestWordsModel;
- (id)suggestWordsModel;
- (void)setSuggestWordsModel:;
- (void).cxx_destruct;
+ (id)suggestWordsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
