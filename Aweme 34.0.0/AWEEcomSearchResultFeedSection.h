@interface AWEEcomSearchResultFeedSection : MTLModel
@property (nonatomic) NSString sectionId;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)items;
- (void)setItems:;
- (id)sectionId;
- (void).cxx_destruct;
- (void)setSectionId:;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
