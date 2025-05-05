@interface IESECFeedResourceCardSearchModel : IESECFeedResourceCardBaseNode
@property (nonatomic) NSArray searchItems;
- (id)searchItems;
- (void)setSearchItems:;
- (void).cxx_destruct;
+ (id)searchItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
